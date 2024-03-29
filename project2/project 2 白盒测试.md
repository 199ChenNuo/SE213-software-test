# project 2 白盒测试

## 1. 测试方法

​	其中语句覆盖是一种最弱的覆盖，判定覆盖和条件覆盖比语句覆盖强，满足判定/条件覆盖标准的测试用例一定也满足判定覆盖、条件覆盖和语句覆盖，条件组合覆盖是除路径覆盖外最强的，路径覆盖也是一种比较强的覆盖，但未必考虑判定条件结果的组合，并不能代替条件覆盖和条件组合覆盖。



## 2. InfoGain.java

该类共有8个方法：

```java
// 构造函数
public InfoGain(ArrayList<String[]> trainData, int decatt);
// 计算信息熵
public double getEntropy(Map<String, Integer> attributeNum);
public double getEntropy(ArrayList<Integer> subset, int attributeIndex);
// 信息熵增益率相关
public int getGainRatioMax(ArrayList<Integer> subset, LinkedList<Integer> selatt);
// 判断分类是否唯一
public boolean isPure(Map<String,Integer> targetNum);
// 获得对应数据子集的对应特征的值-频率字典
public  Map<String,Integer> get_AttributeNum(ArrayList<Integer> subset, int attributeIndex );
// 获得数据在某一特征维度下的子集划分
public Map<String, ArrayList<Integer>> get_AttributeSubset(ArrayList<Integer> subset, int attributeIndex);
// 根据类-数目，判读分类结果
public String get_targetValue(Map<String,Integer> targetNum);
```

以下选取`getGainRatioMax()`详细介绍。



> InfoGain.java  `getGainRatioMax`

```java
//信息熵增益率相关
public int getGainRatioMax(ArrayList<Integer> subset, LinkedList<Integer> selatt){
    //计算原信息熵

    Map<String, Integer> old_TargetNum = get_AttributeNum(subset, decatt);
    double oldEntropy = getEntropy(old_TargetNum);
    double maxGainRatio=0;
    int maxIndex=decatt;

    for(int attributeIndex: selatt){
        Map<String, ArrayList<Integer>> attributeSubset = get_AttributeSubset(subset, attributeIndex);

        int sum = 0;
        double newEntropy = 0;
        for(ArrayList<Integer> tempSubset: attributeSubset.values()){
            int num = tempSubset.size();
            sum += num;
            double tempEntropy = getEntropy(tempSubset,decatt);
            newEntropy += num * tempEntropy;
        }
        newEntropy /= sum;
        double tempGainRatio = (oldEntropy - newEntropy)/getEntropy(subset, attributeIndex);  //计算信息增益率

        //如果信息增益率为负，应该停止分支，此处避免麻烦没有做进一步讨论。
        if(tempGainRatio > maxGainRatio){
            maxGainRatio = tempGainRatio;
            maxIndex = attributeIndex;
        }
    }
    return  maxIndex;
}
```

这段代码的程序流程图如图所示：(代码行数从`//信息熵增益率相关`开始，并且从1开始计数，本文件的pdf版中的代码包含行数)。



![](.\img\pipeline.png)

程序路径有2条：

1. 5, 6, 7, 8, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 25, 26, 27, 29
2. 5, 6, 7, 8, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 25, 26, 27, 29

对于测试的代码来说，语句覆盖率必须要大于95%，然后依据设计的测试用例严格程度可以分为6种：


1. 语句覆盖测试用例设计：
设计合适的测试用例使得所有的语句都被覆盖。

```java
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
```

2. 判定覆盖测试用例设计：
设计合适的输入使得判断语句（本函数之中只有line 25是判断语句）的每个取值分支都至少经历一次。
也即使得 `tempGainRatio > maxGainRatio` 和 `tempGainRatio <= maxGainRatio` 都至少经历一次。

优点：较语句覆盖可以有更强的覆盖，简单易理解，只需要关注单个判定，无需细分即可得到测试用例。 

缺点：大部分的判定条件都是多个组合起来的（or/and/case），若仅判断整个条件的结果，会遗漏部分数据类型测试路径。

3. 路径覆盖测试用例设计：
保证每条可能执行到的路径至少执行一次。



4. 条件覆盖测试用例设计：
选择足够的测试用例，使得运行这些测试用例时，判定中每个条件的所有可能结果至少出现一次，但未必能覆盖全部分支。

条件覆盖要检查每个符合谓词的子表达式值为真和假两种情况，要独立衡量每个子表达式的结果，以确保每个子表达式的值为真和假两种情况都被测试到。

5. 判定条件覆盖测试用例设计：
判定-条件覆盖就是设计足够的测试用例，使得判断中每个条件的所有可能取值至少执行一次，同时每个判断的所有可能判断结果至少执行，即要求各个判断的所有可能的条件取值组合至少执行一次。

6. 条件组合覆盖设计用例设计：
使所有判定中各条件判断结果的所有组合至少出现一次，满足这种覆盖标准成为条件组合覆盖。这是算是覆盖最全的了。







通过设置Junit测试类的运行configuration：

![](img\Junit-setting.png)

并且选择`Run with coverage`就可以查看测试用例的覆盖率。（这里提一下助教的要求：代码覆盖率不低于95%）

![](img\coverage.png)

## 3. DecisionTree.java

> `printData`

编码人员用于调试输出的辅助方法，逻辑是遍历打印train data，没有分支，采用初始化后直接调用的方式测试正确性

> `read_trainARFF`

读取arff后缀的数据文件，并解析成为DecisionTree数据结构

测试包含两个用例，

- 正常的输入数据文件名

  不抛出异常，同时完成数据结构的初始化

- 不存在的文件

  抛出FileNotExist异常

> `write_DecisionTree

```java
public void write_DecisionTree(String filename) {
    try {
        File file = new File(filename);
        if (!file.exists())
            file.createNewFile();
        FileOutputStream fs = new FileOutputStream(filename);
        BufferedOutputStream bos = new BufferedOutputStream(fs);
        write_Node(bos, root, "");
        bos.flush();
        bos.close();
        fs.close();
    }catch (IOException e){
        e.printStackTrace();
    }
}
```

![](img\pipeline_WriteDecisionTree.png)

如上图所示，遍历所有分支需要使4节点为true和false各一次，设计两个测试用例

- output file文件存在的情况

  应当覆盖文件内容

- output file文件不存在的情况

  应当创建文件后，写入文件内容

> `write_Node`

将节点数据按序保存到xml文件中，通过输入预先准备的arff数据并核对输出文件内容测试。

> `setDec`

设置成员变量的值，通过调用一次测试。程序不抛出权限异常则说明该方法正确。

> `get_leafNum`

获得叶子结点里的数目，返回一个二元数组，第一个元素是最小值，第二个元素是总和。如果结点只有一个元素，最小值设为0，最大值是总和，如果没有元素，最小值设置为最大的int值。

通过测试TreeNode的targetNum的size为0,1和大于1的三种情况，都通过则说明该方法正确。

设计三个测试用例：

- size = 0 返回{Integer.MAX_VALUE,0} 

- size = 1 返回{0,sum}

- size > 2 返回{min,sum}



> `cutBranch`

有三种情况：
1. 是本身是叶子结点，则不需要剪枝，直接返回
2. 非叶子结点，符合剪枝条件，剪枝
3. 非叶子结点，不符合剪枝条件，不用剪枝

设计三个测试用例： 

1. 本身是叶子结点： 

node和剪枝之前不变，返回size为1的{min,sum}数组ArrayList


2. 非叶子结点，符合剪枝条件

node把子节点的数组的元素清零，属性设为leafNode,返回size为1的{min,sum}数组ArrayList


3. 非叶子结点，不符合剪枝条件

node和剪枝之前不变，返回size为叶子节点个数的{min,sum}数组ArrayList

如果三个用例的返回结果和node的属性都符合期望值，则说明测试通过。



> `buildDT`

构建决策树，设置节点名称和节点值，数据行子集，数据列子集，再根据infogain的信息，构建决策树，返回根节点。




> `train`

子方法的正确性在上述测试中已经覆盖，train函数的逻辑是按序调用上述方法实现程序逻辑。

测试由已有的数据构建得到正确的决策树，如果得到的决策树和期望的树结构一致，各节点的各个属性的值都一致，则说明测试通过。


> `main`

子方法的正确性在上述测试中已经覆盖，main函数的逻辑是按序调用上述方法实现程序逻辑。

在测试中使用预先准备的arff数据调用main函数，能正常运行到程序结束并输出结果则说明测试通过。





```java
// 设置InfoGain
public void setInfoGain(InfoGain in)；
// 训练函数
public void train(String data_path, String targetAttr)；
// 构建决策树
public TreeNode buildDT(String fatherName, String fatherValue, ArrayList<Integer> subset,LinkedList<Integer> selatt)；
// 剪枝函数
public ArrayList<int[]> cutBranch(TreeNode node)；
// 获得叶子结点的数目
public int[] get_leafNum(TreeNode node)；
// 读取arff文件，给attribute、attributevalue、data赋值
public void read_trainARFF(File file)；
// 打印Data
public void printData()；
// 将决策树存储到xml文件中
public void write_DecisionTree(String filename)；
// 写TreeNode节点
private void write_Node(BufferedOutputStream bos, TreeNode node, String block)；
// 设置决策变量
public void setDec(int n)；
public void setDec(String targetAttr)；
// main()
public static void main(String[] args)；
// 获得根节点
public TreeNode getRoot()；
```



```java
public TreeNode();
public String getNodeType() ;
public void setNodeType(String nodeType);
public String getAttributeName() ;
public void setAttributeName(String attributeName);
public String getAttributeValue() ;
public void setAttributeValue(String attributeValue);
public ArrayList<TreeNode> getChildTreeNode() ;
public void setChildTreeNode(ArrayList<TreeNode> childTreeNode) ;
public TreeNode getFatherTreeNode() ;
public void setFatherTreeNode(TreeNode fatherTreeNode);
public Map<String, Integer> getTargetNum();
public void setTargetNum(Map<String, Integer> targetNum);
public String getTargetValue();
public void setTargetValue(String targetValue);
@Override
public String toString();
```





