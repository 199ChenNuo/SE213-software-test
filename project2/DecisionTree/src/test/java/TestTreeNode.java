import org.junit.jupiter.api.Test;

import java.util.*;

import static org.junit.jupiter.api.Assertions.*;

public class TestTreeNode {

    @Test
    public void testNodeType(){
        TreeNode node=new TreeNode();
        assertNull(node.getNodeType());
        node.setNodeType("LeafNode");
        assertEquals("LeafNode", node.getNodeType());
    }

    @Test
    public void testAttributeName(){
        TreeNode node=new TreeNode();
        assertNull(node.getAttributeName());
        node.setAttributeName("windy");
        assertEquals("windy", node.getAttributeName());
    }

    @Test
    public void testAttributeValue(){
        TreeNode node=new TreeNode();
        assertNull(node.getAttributeValue());
        node.setAttributeValue("YES");
        assertEquals("YES", node.getAttributeValue());
    }

    @Test
    public void testChildTreeNode(){
        TreeNode node=new TreeNode();
        assertNull(node.getChildTreeNode());
        ArrayList<TreeNode> children=new ArrayList<>();
        children.add(new TreeNode());
        node.setChildTreeNode(children);
        assertEquals(children, node.getChildTreeNode());
    }

    @Test
    public void testFatherTreeNode(){
        TreeNode father=new TreeNode();
        TreeNode node=new TreeNode();
        assertNull(node.getFatherTreeNode());
        node.setFatherTreeNode(father);
        assertEquals(father, node.getFatherTreeNode());
    }

    @Test
    public void testTargetNumAndTargetValue(){
        TreeNode node=new TreeNode();
        assertNull(node.getTargetNum());
        assertNull(node.getTargetValue());
        Map<String, Integer> m=new HashMap<>();
        m.put("YES",5);
        m.put("NO",4);
        node.setTargetNum(m);
        node.setTargetValue("YES");
        assertEquals(m, node.getTargetNum());
        assertEquals("YES", node.getTargetValue());
    }

    @Test
    public void testTreeNode(){
        TreeNode node=new TreeNode();
        node.setAttributeName("root");
        TreeNode node1=new TreeNode();
        TreeNode node2=new TreeNode();
        node1.setAttributeName("windy");
        node2.setAttributeName("windy");
        node1.setAttributeValue("NO");
        node2.setAttributeValue("YES");
        Map<String, Integer> m1=new HashMap<>();
        m1.put("YES",5);
        m1.put("NO",1);
        node1.setTargetNum(m1);
        Map<String, Integer> m2=new HashMap<>();
        m2.put("YES",1);
        m2.put("NO",5);
        node2.setTargetNum(m2);
        node1.setFatherTreeNode(node);
        node2.setFatherTreeNode(node);
        node1.setNodeType("LeafNode");
        node2.setNodeType("LeafNode");
        node1.setTargetValue("NO");
        node2.setTargetValue("YES");
        ArrayList<TreeNode> children=new ArrayList<>();
        children.add(node1); children.add(node2);
        Map<String, Integer> m=new HashMap<>();
        m.put("YES",6);
        m.put("NO",6);
        node.setTargetNum(m);
        node.setChildTreeNode(children);
        assertEquals("TreeNode{nodeType='null', attributeName='root', attributeValue='null', childTreeNode=[TreeNode{nodeType='LeafNode', attributeName='windy', attributeValue='NO', childTreeNode=null, targetNum={NO=1, YES=5}, targetValue='NO'}, TreeNode{nodeType='LeafNode', attributeName='windy', attributeValue='YES', childTreeNode=null, targetNum={NO=5, YES=1}, targetValue='YES'}], targetNum={NO=6, YES=6}, targetValue='null'}", node.toString());

    }
}
