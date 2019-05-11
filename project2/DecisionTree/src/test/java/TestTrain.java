import org.junit.jupiter.api.Test;

import java.util.*;

import static org.junit.jupiter.api.Assertions.*;

public class TestTrain {

    private String printTree(TreeNode root){
        String result = root.toString();
        for (TreeNode child: root.getChildTreeNode()){
            result+=printTree(child);
        }
        return result;
    }

    private String printRoot(TreeNode root){
        String result = root.toString();
        return result;
    }

    private TreeNode initTreeNode1(){
        TreeNode treeNode1 = new TreeNode();
        Map<String,Integer> targetNum1 = new HashMap<>();
        targetNum1.put("hot",3);
        targetNum1.put("cold",4);
        targetNum1.put("high",5);
        treeNode1.setTargetNum(targetNum1);
        treeNode1.setNodeType("leafNode");
        return treeNode1;
    }
    private TreeNode initTreeNode2(){
        TreeNode treeNode2 = new TreeNode();
        Map<String,Integer> targetNum2 = new HashMap<>();
        targetNum2.put("1",8);
        targetNum2.put("2",10);
        treeNode2.setTargetNum(targetNum2);
        treeNode2.setNodeType("notLeafNode");

        TreeNode treeNode3 = new TreeNode();
        Map<String,Integer> targetNum3 = new HashMap<>();
        targetNum3.put("3",6);
        targetNum3.put("4",9);
        treeNode3.setTargetNum(targetNum3);
        treeNode3.setNodeType("notLeafNode");

        TreeNode treeNode4 = new TreeNode();
        Map<String,Integer> targetNum4 = new HashMap<>();
        targetNum4.put("5",2);
        targetNum4.put("6",1);
        treeNode4.setTargetNum(targetNum4);
        treeNode4.setNodeType("leafNode");

        ArrayList<TreeNode> Node2Child = new ArrayList<TreeNode>();
        Node2Child.add(treeNode3);
        Node2Child.add(treeNode4);
        treeNode2.setChildTreeNode(Node2Child);

        TreeNode treeNode5 = new TreeNode();
        Map<String,Integer> targetNum5 = new HashMap<>();
        targetNum5.put("7",5);
        targetNum5.put("8",4);
        treeNode5.setTargetNum(targetNum5);
        treeNode5.setNodeType("leafNode");

        TreeNode treeNode6 = new TreeNode();
        Map<String,Integer> targetNum6 = new HashMap<>();
        targetNum6.put("9",1);
        targetNum6.put("10",5);
        treeNode6.setTargetNum(targetNum6);
        treeNode6.setNodeType("leafNode");

        ArrayList<TreeNode> Node3Child = new ArrayList<TreeNode>();
        Node3Child.add(treeNode5);
        Node3Child.add(treeNode6);
        treeNode3.setChildTreeNode(Node3Child);
        return treeNode2;
    }
    private TreeNode initTreeNode3(){
        TreeNode treeNode2 = new TreeNode();
        Map<String,Integer> targetNum2 = new HashMap<>();
        targetNum2.put("1",8);
        targetNum2.put("2",10);
        treeNode2.setTargetNum(targetNum2);
        treeNode2.setNodeType("notLeafNode");

        TreeNode treeNode3 = new TreeNode();
        Map<String,Integer> targetNum3 = new HashMap<>();
        targetNum3.put("3",7);
        targetNum3.put("4",1);
        treeNode3.setTargetNum(targetNum3);
        treeNode3.setNodeType("leafNode");

        TreeNode treeNode4 = new TreeNode();
        Map<String,Integer> targetNum4 = new HashMap<>();
        targetNum4.put("5",1);
        targetNum4.put("6",9);
        treeNode4.setTargetNum(targetNum4);
        treeNode4.setNodeType("leafNode");

        ArrayList<TreeNode> Node2Child = new ArrayList<TreeNode>();
        Node2Child.add(treeNode3);
        Node2Child.add(treeNode4);
        treeNode2.setChildTreeNode(Node2Child);

        return treeNode2;
    }

    @Test
    void TestGet_leafNum(){
        DecisionTree decisionTree = new DecisionTree();

        //size==0
        TreeNode treeNode1 = new TreeNode();
        Map<String,Integer> targetNum1 = new HashMap<>();
        treeNode1.setTargetNum(targetNum1);
        assertEquals(Integer.MAX_VALUE,decisionTree.get_leafNum(treeNode1)[0]);
        assertEquals(0,decisionTree.get_leafNum(treeNode1)[1]);

        //size==1
        Map<String,Integer> targetNum2 = new HashMap<>();
        targetNum2.put("cool",4);
        treeNode1.setTargetNum(targetNum2);
        assertEquals(0,decisionTree.get_leafNum(treeNode1)[0]);
        assertEquals(4,decisionTree.get_leafNum(treeNode1)[1]);

        //size>1
        Map<String,Integer> targetNum3 = new HashMap<>();
        targetNum3.put("hot",3);
        targetNum3.put("cold",4);
        targetNum3.put("high",5);
        treeNode1.setTargetNum(targetNum3);
        assertEquals(3,decisionTree.get_leafNum(treeNode1)[0]);
        assertEquals(12,decisionTree.get_leafNum(treeNode1)[1]);

        //max溢出
        Map<String,Integer> targetNum4 = new HashMap<>();
        targetNum4.put("hot", 2147483647);
        targetNum4.put("cold",1);
        treeNode1.setTargetNum(targetNum4);
        assertEquals(1,decisionTree.get_leafNum(treeNode1)[0]);
        assertEquals(-2147483648,decisionTree.get_leafNum(treeNode1)[1]);


    }

    @Test
    void TestCutBranch(){
        DecisionTree decisionTree = new DecisionTree();

        //叶子结点本身
        TreeNode treeNode1 = initTreeNode1();
        ArrayList<int[]> actualNum = decisionTree.cutBranch(treeNode1);
        ArrayList<int[]> resultNum = new ArrayList<int[]>();
        resultNum.add(decisionTree.get_leafNum(treeNode1));
        assertEquals(resultNum.size(),1);
        assertEquals(resultNum.get(0)[0],3);
        assertEquals(resultNum.get(0)[1],12);

        //非叶子结点，符合剪枝条件
        TreeNode treeNode2 = initTreeNode2();
        ArrayList<int[]> resultNum2 = new ArrayList<int[]>();
        resultNum2 = decisionTree.cutBranch(treeNode2);
        assertEquals(1,resultNum2.size());
        assertEquals(8,resultNum2.get(0)[0]);
        assertEquals(18,resultNum2.get(0)[1]);
        String FinishCut2 = printRoot(treeNode2);
        assertEquals(FinishCut2,printTree(treeNode2));

        //非叶子结点，不符合剪枝条件
        TreeNode treeNode3 = initTreeNode3();
        String BeforeCut3 = printTree(treeNode3);//剪枝前
        ArrayList<int[]> resultNum3 = new ArrayList<int[]>();
        resultNum3 = decisionTree.cutBranch(treeNode3);//剪枝
        assertEquals(BeforeCut3,printTree(treeNode3));//不用剪
        assertEquals(2,resultNum3.size());
        assertEquals(1,resultNum3.get(0)[0]);
        assertEquals(8,resultNum3.get(0)[1]);
        assertEquals(1,resultNum3.get(1)[0]);
        assertEquals(10,resultNum3.get(1)[1]);
    }

    @Test
    void TestBuildDT(){

    }

    @Test
    void TestTrain(){

    }


}
