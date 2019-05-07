import org.junit.jupiter.api.Test;

import java.util.*;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

public class TestInfoGain {


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
        ArrayList<String[]> trainData = new ArrayList<String[]>();
        String[] sl={"sunny","hot","high","FALSE","no"};
        trainData.add(sl);
        String[] sl2={"rainy","mild","high","FALSE","yes"};
        trainData.add(sl2);
        String[] sl3={"sunny","cool","high","TRUE","no"};
        trainData.add(sl3);
        String[] sl4={"sunny","cold","high","FALSE","yes"};
        trainData.add(sl4);
        return new InfoGain(trainData,4);
    }

    @Test
    void TestEntropyWithAttributeNum(){
        InfoGain ig=initInfoGain1();
        Map<String,Integer> attributeNum=new HashMap<String, Integer>();
        attributeNum.put("sunny",2);
        attributeNum.put("rainy",2);
        assertEquals(1,ig.getEntropy(attributeNum));
    }

    @Test
    void TestGetAttributeNum(){
        InfoGain ig=initInfoGain2();
        ArrayList<Integer> idxlist=new ArrayList<>();
        idxlist.add(0);idxlist.add(1);
        Map<String,Integer> expected=new HashMap<String, Integer>();
        expected.put("sunny",1);
        expected.put("rainy",1);
        assertEquals(expected,ig.get_AttributeNum(idxlist,0));
        idxlist.add(2);idxlist.add(3);
        expected.put("sunny",2);
        expected.put("rainy",1);
        expected.put("overcast",1);
        assertEquals(expected,ig.get_AttributeNum(idxlist,0));
        Map<String,Integer> expected2=new HashMap<String, Integer>();
        expected2.put("hot",3);
        expected2.put("mild",1);
        assertEquals(expected2,ig.get_AttributeNum(idxlist,1));
    }

    @Test
    void TestGetEntropyWithSubsetAndIndex(){
        InfoGain ig=initInfoGain2();
        ArrayList<Integer> idxlist=new ArrayList<>();
        idxlist.add(0);idxlist.add(1);
        assertEquals(1,ig.getEntropy(idxlist,0));
        idxlist.add(2);idxlist.add(3);
        assertEquals(1.5,ig.getEntropy(idxlist,0));
        assertEquals(0,ig.getEntropy(idxlist,2));
    }
    @Test
    void TestGetAttributeSubset(){
        InfoGain ig=initInfoGain2();
        ArrayList<Integer> idxlist=new ArrayList<>();
        idxlist.add(0);idxlist.add(1);
        Map<String, ArrayList<Integer>> expected=new HashMap<String, ArrayList<Integer>>();
        expected.put("sunny",new ArrayList<>(Arrays.asList(0)));
        expected.put("rainy",new ArrayList<>(Arrays.asList(1)));
        assertEquals(expected,ig.get_AttributeSubset(idxlist,0));
        idxlist.add(2);idxlist.add(3);
        expected.put("sunny",new ArrayList<>(Arrays.asList(0,2)));
        expected.put("rainy",new ArrayList<>(Arrays.asList(1)));
        expected.put("overcast",new ArrayList<>(Arrays.asList(3)));
        assertEquals(expected,ig.get_AttributeSubset(idxlist,0));
        Map<String, ArrayList<Integer>> expected2=new HashMap<String, ArrayList<Integer>>();
        expected2.put("high",new ArrayList<>(Arrays.asList(0,1,2,3)));
        assertEquals(expected2,ig.get_AttributeSubset(idxlist,2));
    }

    @Test
    void TestGetTargetValue(){
        InfoGain ig=initInfoGain1();
        Map<String,Integer> target=new HashMap<String, Integer>();
        target.put("yes",5);
        assertEquals("yes",ig.get_targetValue(target));
        target.put("no",1);
        assertEquals("yes",ig.get_targetValue(target));
        target.put("no",10);
        assertEquals("no",ig.get_targetValue(target));
    }

    @Test
    void TestIsPure(){
        InfoGain ig=initInfoGain1();
        Map<String,Integer> target=new HashMap<String, Integer>();
        assertTrue(ig.isPure(target));
        target.put("sunny",100);
        assertTrue(ig.isPure(target));
        target.put("rainy",1);
        assertFalse(ig.isPure(target));
    }

    @Test
    void TestGetGainRatioMax(){
        InfoGain ig=initInfoGain2();
        ArrayList<Integer> idxlist=new ArrayList<>();
        idxlist.add(0);idxlist.add(1);
        LinkedList<Integer> ll=new LinkedList<Integer>();
        ll.add(0);ll.add(1);ll.add(2);ll.add(3);
        assertEquals(0,ig.getGainRatioMax(idxlist,ll));
        idxlist.add(2);idxlist.add(3);
        assertEquals(0,ig.getGainRatioMax(idxlist,ll));
        InfoGain ig2=initInfoGain3();
        assertEquals(1,ig2.getGainRatioMax(idxlist,ll));
    }
}
