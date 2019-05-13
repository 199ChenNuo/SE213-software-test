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
    private TreeNode initTreeNodedt1(){
        TreeNode treeNode1 = new TreeNode();
        Map<String,Integer> targetNum1 = new HashMap<>();
        targetNum1.put("no",4);
        treeNode1.setTargetNum(targetNum1);
        treeNode1.setNodeType("leafNode");
        treeNode1.setAttributeName("outlook");
        treeNode1.setAttributeValue("rainy");
        treeNode1.setTargetValue("no");

        TreeNode treeNode2 = new TreeNode();
        Map<String,Integer> targetNum2 = new HashMap<>();
        targetNum2.put("yes",5);
        treeNode2.setTargetNum(targetNum2);
        treeNode2.setNodeType("leafNode");
        treeNode2.setAttributeName("outlook");
        treeNode2.setAttributeValue("sunny");
        treeNode2.setTargetValue("yes");

        TreeNode treeNode3 = new TreeNode();
        Map<String,Integer> targetNum3 = new HashMap<>();
        targetNum3.put("yes",5);
        targetNum3.put("no",4);
        treeNode3.setTargetNum(targetNum3);
        treeNode3.setNodeType("null");
        treeNode3.setAttributeName("root");
        treeNode3.setTargetValue("yes");

        ArrayList<TreeNode> Node3Child = new ArrayList<TreeNode>();
        Node3Child.add(treeNode1);
        Node3Child.add(treeNode2);
        treeNode3.setChildTreeNode(Node3Child);
        treeNode1.setFatherTreeNode(treeNode3);
        treeNode2.setFatherTreeNode(treeNode3);
        return treeNode3;
    }

    private InfoGain initInfoGain1(){
        ArrayList<String[]> trainData = new ArrayList<String[]>();
        String[] sl={"sunny","hot","high","FALSE","no"};
        trainData.add(sl);
        String[] sl2={"rainy","mild","high","FALSE","yes"};
        trainData.add(sl2);
        return new InfoGain(trainData,4);
    }
    private InfoGain initInfoGain2(){
        ArrayList<String[]> trainData = new ArrayList<String[]>();
        String[] sl={"sunny","hot","high","FALSE","no"};
        trainData.add(sl);
        String[] sl2={"rainy","mild","high","FALSE","yes"};
        trainData.add(sl2);
        String[] sl3={"sunny","hot","high","TRUE","no"};
        trainData.add(sl3);
        String[] sl4={"overcast","hot","high","FALSE","yes"};
        trainData.add(sl4);
        return new InfoGain(trainData,4);
    }
    private InfoGain initInfoGain3(){
        ArrayList<String[]> trainData = initTrainData();
        return new InfoGain(trainData,4);
    }
    private ArrayList<String[]> initTrainData(){
        ArrayList<String[]> trainData = new ArrayList<String[]>();
        String[] sl1={"sunny","hot","high","FALSE","yes"};
        trainData.add(sl1);
        String[] sl2={"sunny","hot","high","TRUE","yes"};
        trainData.add(sl2);
        String[] sl3={"rainy","cool","normal","FALSE","no"};
        trainData.add(sl3);
        String[] sl4={"rainy","cool","normal","TRUE","no"};
        trainData.add(sl4);
        String[] sl5={"sunny","mild","high","FALSE","yes"};
        trainData.add(sl5);
        String[] sl6={"sunny","cool","normal","FALSE","yes"};
        trainData.add(sl6);
        String[] sl7={"rainy","mild","normal","FALSE","no"};
        trainData.add(sl7);
        String[] sl8={"sunny","mild","normal","TRUE","yes"};
        trainData.add(sl8);
        String[] sl9={"rainy","mild","high","TRUE","no"};
        trainData.add(sl9);
        return trainData;
    };
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
        String result1 = treeNode1.toString();
        ArrayList<int[]> actualNum = decisionTree.cutBranch(treeNode1);
        ArrayList<int[]> resultNum = new ArrayList<int[]>();
        resultNum.add(decisionTree.get_leafNum(treeNode1));
        assertEquals(resultNum.size(),1);
        assertEquals(resultNum.get(0)[0],3);
        assertEquals(resultNum.get(0)[1],12);
        assertEquals(result1,treeNode1.toString());

        //非叶子结点，符合剪枝条件
        TreeNode treeNode2 = initTreeNode2();
        ArrayList<int[]> resultNum2 = new ArrayList<int[]>();
        resultNum2 = decisionTree.cutBranch(treeNode2);
        assertEquals(1,resultNum2.size());
        assertEquals(8,resultNum2.get(0)[0]);
        assertEquals(18,resultNum2.get(0)[1]);
        assertEquals("TreeNode{nodeType='leafNode', attributeName='null', attributeValue='null', childTreeNode=[], targetNum={1=8, 2=10}, targetValue='null'}"
                ,printTree(treeNode2));

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
        DecisionTree decisionTree = new DecisionTree();
        String fatherName="root";
        String fatherValue="null";
        ArrayList<Integer> subset = new ArrayList<Integer>();
        for(int i=0;i<9;i++){
            subset.add(i);
        }
        LinkedList<Integer> selatt = new LinkedList<Integer>();
        for(int i=0;i<5;i++){
            selatt.add(i);
        }
        ArrayList<String>Train_AttributeName = new ArrayList<String>();
        Train_AttributeName.add("outlook");
        Train_AttributeName.add("temperature");
        Train_AttributeName.add("humidity");
        Train_AttributeName.add("windy");
        Train_AttributeName.add("play");
        decisionTree.setTrain_AttributeName(Train_AttributeName);
        ArrayList<ArrayList<String>> train_attributeValue = new ArrayList<ArrayList<String>>();
        ArrayList<String> l1=new ArrayList<>();

        ArrayList<String[]>trainData = initTrainData();
        for(String[] sl:trainData){
            l1.clear();
            for(String s:sl){
                l1.add(s);
            }
            train_attributeValue.add(l1);
        }
        decisionTree.setTrain_attributeValue(train_attributeValue);
        decisionTree.setInfoGain(initInfoGain3());
        decisionTree.setDec(4);

        TreeNode tn = decisionTree.buildDT(fatherName,fatherValue,subset,selatt);
        assertEquals(printTree(initTreeNodedt1()), printTree(tn));

    }

    @Test
    void TestTrain(){
        DecisionTree decisionTree = new DecisionTree();
        decisionTree.train("data/train.arff","play");
        assertEquals("TreeNode{nodeType='null', attributeName='root', attributeValue='null', childTreeNode=[TreeNode{nodeType='null', attributeName='outlook', attributeValue='rainy', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='TRUE', childTreeNode=[], targetNum={no=2}, targetValue='no'}, TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='FALSE', childTreeNode=[], targetNum={yes=3}, targetValue='yes'}], targetNum={no=2, yes=3}, targetValue='yes'}, TreeNode{nodeType='leafNode', attributeName='outlook', attributeValue='overcast', childTreeNode=[], targetNum={yes=4}, targetValue='yes'}, TreeNode{nodeType='null', attributeName='outlook', attributeValue='sunny', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='humidity', attributeValue='normal', childTreeNode=[], targetNum={yes=2}, targetValue='yes'}, TreeNode{nodeType='leafNode', attributeName='humidity', attributeValue='high', childTreeNode=[], targetNum={no=3}, targetValue='no'}], targetNum={no=3, yes=2}, targetValue='no'}], targetNum={no=5, yes=9}, targetValue='yes'}TreeNode{nodeType='null', attributeName='outlook', attributeValue='rainy', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='TRUE', childTreeNode=[], targetNum={no=2}, targetValue='no'}, TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='FALSE', childTreeNode=[], targetNum={yes=3}, targetValue='yes'}], targetNum={no=2, yes=3}, targetValue='yes'}TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='TRUE', childTreeNode=[], targetNum={no=2}, targetValue='no'}TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='FALSE', childTreeNode=[], targetNum={yes=3}, targetValue='yes'}TreeNode{nodeType='leafNode', attributeName='outlook', attributeValue='overcast', childTreeNode=[], targetNum={yes=4}, targetValue='yes'}TreeNode{nodeType='null', attributeName='outlook', attributeValue='sunny', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='humidity', attributeValue='normal', childTreeNode=[], targetNum={yes=2}, targetValue='yes'}, TreeNode{nodeType='leafNode', attributeName='humidity', attributeValue='high', childTreeNode=[], targetNum={no=3}, targetValue='no'}], targetNum={no=3, yes=2}, targetValue='no'}TreeNode{nodeType='leafNode', attributeName='humidity', attributeValue='normal', childTreeNode=[], targetNum={yes=2}, targetValue='yes'}TreeNode{nodeType='leafNode', attributeName='humidity', attributeValue='high', childTreeNode=[], targetNum={no=3}, targetValue='no'}",
                printTree(decisionTree.getRoot()));

        DecisionTree decisionTree2 = new DecisionTree();
        decisionTree2.train("data/train.arff","windy");
        assertEquals("TreeNode{nodeType='null', attributeName='root', attributeValue='null', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='play', attributeValue='no', childTreeNode=[], targetNum={TRUE=3, FALSE=2}, targetValue='TRUE'}, TreeNode{nodeType='null', attributeName='play', attributeValue='yes', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='TRUE', childTreeNode=[], targetNum={TRUE=3}, targetValue='TRUE'}, TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='FALSE', childTreeNode=[], targetNum={FALSE=6}, targetValue='FALSE'}], targetNum={TRUE=3, FALSE=6}, targetValue='FALSE'}], targetNum={TRUE=6, FALSE=8}, targetValue='FALSE'}TreeNode{nodeType='leafNode', attributeName='play', attributeValue='no', childTreeNode=[], targetNum={TRUE=3, FALSE=2}, targetValue='TRUE'}TreeNode{nodeType='null', attributeName='play', attributeValue='yes', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='TRUE', childTreeNode=[], targetNum={TRUE=3}, targetValue='TRUE'}, TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='FALSE', childTreeNode=[], targetNum={FALSE=6}, targetValue='FALSE'}], targetNum={TRUE=3, FALSE=6}, targetValue='FALSE'}TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='TRUE', childTreeNode=[], targetNum={TRUE=3}, targetValue='TRUE'}TreeNode{nodeType='leafNode', attributeName='windy', attributeValue='FALSE', childTreeNode=[], targetNum={FALSE=6}, targetValue='FALSE'}",
                printTree(decisionTree2.getRoot()));

        DecisionTree decisionTree3 = new DecisionTree();
        decisionTree3.train("data/train.arff","temperature");
        assertEquals("TreeNode{nodeType='leafNode', attributeName='root', attributeValue='null', childTreeNode=[], targetNum={mild=6, cool=4, hot=4}, targetValue='mild'}",
                printTree(decisionTree3.getRoot()));

        DecisionTree decisionTree4 = new DecisionTree();
        decisionTree4.train("data/train.arff","outlook");
        assertEquals("TreeNode{nodeType='leafNode', attributeName='root', attributeValue='null', childTreeNode=[], targetNum={rainy=5, overcast=4, sunny=5}, targetValue='rainy'}",
                printTree(decisionTree4.getRoot()));

        DecisionTree decisionTree5 = new DecisionTree();
        decisionTree5.train("data/train.arff","humidity");
        assertEquals("TreeNode{nodeType='null', attributeName='root', attributeValue='null', childTreeNode=[TreeNode{nodeType='leafNode', attributeName='temperature', attributeValue='mild', childTreeNode=[], targetNum={normal=2, high=4}, targetValue='high'}, TreeNode{nodeType='leafNode', attributeName='temperature', attributeValue='cool', childTreeNode=[], targetNum={normal=4}, targetValue='normal'}, TreeNode{nodeType='leafNode', attributeName='temperature', attributeValue='hot', childTreeNode=[], targetNum={normal=1, high=3}, targetValue='high'}], targetNum={normal=7, high=7}, targetValue='normal'}TreeNode{nodeType='leafNode', attributeName='temperature', attributeValue='mild', childTreeNode=[], targetNum={normal=2, high=4}, targetValue='high'}TreeNode{nodeType='leafNode', attributeName='temperature', attributeValue='cool', childTreeNode=[], targetNum={normal=4}, targetValue='normal'}TreeNode{nodeType='leafNode', attributeName='temperature', attributeValue='hot', childTreeNode=[], targetNum={normal=1, high=3}, targetValue='high'}" ,
                printTree(decisionTree5.getRoot()));

    }


}
