import org.junit.jupiter.api.Test;

import java.io.*;
import java.time.format.DecimalStyle;
import java.util.*;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

public class TestDecisionTree {

    @Test
    void TestReadTrainARFF() {
        DecisionTree dt = new DecisionTree();
        dt.read_trainARFF(new File("data/train.arff"));
        dt.read_trainARFF(new File("data/fortest0.arff"));
        dt.read_trainARFF(new File("not exists"));
    }

    @Test
    void TestSetInfoGain(){
        DecisionTree dt = new DecisionTree();
        ArrayList<String[]> trainData = new ArrayList<String[]>();
        InfoGain in = new InfoGain(trainData, 4);
        dt.setInfoGain(in);
    }

    @Test
    void TestPrintData() {
        DecisionTree dt = new DecisionTree();
        dt.read_trainARFF(new File("data/train.arff"));
        dt.printData();
    }

    @Test
    void TestWriteDecisionTree() {
        // init dt
        DecisionTree dt = new DecisionTree();
        dt.train("data/fortest0.arff", "play");

        // delete test file if exists
        File testfile = new File("output/test_not_exists.xml");
        if (testfile.exists()) {
            testfile.delete();
        }

        // test if outputfile not exists
        assertEquals(false, testfile.exists());
        dt.write_DecisionTree("output/test_not_exists.xml");
        assertEquals(true, testfile.exists());
        testfile.delete();

        // test if outputfile exists
        testfile = new File("output/test1.xml");
        if (!testfile.exists()){
            try {
                testfile.createNewFile();
            } catch (IOException e){
                e.printStackTrace();
            }
        }
        assertEquals(true, testfile.exists());
        dt.write_DecisionTree("output/test1.xml");
        assertEquals(true, testfile.exists());
        testfile.delete();
    }

    @Test
    void TestWriteNode() {
        // init dt
        DecisionTree dt = new DecisionTree();
        dt.train("data/fortest0.arff", "play");

        // test
        dt.write_DecisionTree("output/test0.xml");
        File out = new File("output/test0.xml");
        assertEquals(true, out.exists());

        // compare to standard file
        try {
            FileReader fr_test = new FileReader("output/test0.xml");
            BufferedReader br_test = new BufferedReader(fr_test);
            FileReader fr_cmp = new FileReader("output/fortest0.xml");
            BufferedReader br_cmp = new BufferedReader(fr_cmp);
            String test_line = null;
            String cmp_line = null;
            while ((cmp_line = br_cmp.readLine()) != null) {
                assertTrue((test_line = br_test.readLine()) != null);
                assertEquals(cmp_line, test_line);
            }
            assertTrue((test_line = br_test.readLine()) == null);
            br_test.close();
            fr_test.close();
            br_cmp.close();
            fr_cmp.close();
        }catch (IOException e){
            e.printStackTrace();
        }

        out.delete();
        assertFalse(out.exists());
    }

    @Test
    void TestSetDec() {
        DecisionTree dt = new DecisionTree();
        dt.train("data/train.arff","play");
        dt.setDec(0);
//        dt.setDec(-1);
//        dt.setDec(0xFFFFFFFF);
    }

    @Test
    void TestMain() {
        DecisionTree.main(null);
        File f = new File("output/Tree.xml");
        assertTrue(f.exists());
    }

    void printTree(TreeNode root){
        for (TreeNode child: root.getChildTreeNode()){
            System.out.println(child);
            printTree(child);
        }
    }

    @Test
    void TestGetRoot(){
        DecisionTree dt = new DecisionTree();
        TreeNode root = dt.getRoot();
    }

    @Test
    void TestSetDecWrong(){
        DecisionTree dt = new DecisionTree();
        dt.setDec(100);
    }

}
