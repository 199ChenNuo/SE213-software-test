package test;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

import java.util.List;

public class CheckBoxTest {

    final private static String url="https://movie.douban.com/";

    private ChromeDriver driver;

    public CheckBoxTest(ChromeDriver driver){
        this.driver=driver;
        driver.navigate().to(url);
    }

    // 分类
    private void testCheckBox1(){
        WebElement li1=driver.findElementByXPath("//div[@id='db-nav-movie']/div[2]/div[1]/ul[1]/li[6]/a");
        li1.click();
        WebElement li2=driver.findElementByXPath("//div[@id='app']/div[1]/div[1]/div[1]/ul[1]/li[2]");
        li2.click();
        List<WebElement> checkBoxInput = driver.findElementsByCssSelector(".check label.checkbox span");
        WebElement checkbox1 = checkBoxInput.get(0);
        assert (checkbox1.getAttribute("class").equals("checkbox__input"));
        checkbox1.click();
        assert (checkbox1.getAttribute("class").equals("checkbox__input is-checked is-focus"));
        checkbox1.click();
        assert (checkbox1.getAttribute("class").equals("checkbox__input is-checked"));
        WebElement checkbox2 = checkBoxInput.get(1);
        checkbox2.click();
        assert (checkbox2.getAttribute("class").equals("checkbox__input"));
        checkbox2.click();
        assert (checkbox2.getAttribute("class").equals("checkbox__input is-checked is-focus"));
        checkbox2.click();
        assert (checkbox2.getAttribute("class").equals("checkbox__input is-checked"));

        System.out.println("Success: testCheckBox1");

    }

    // 选电影
    private void testCheckBox2(){
        WebElement li1=driver.findElementByXPath("//div[@id='db-nav-movie']/div[2]/div[1]/ul[1]/li[3]/a");
        li1.click();
        WebElement e2=driver.findElementByName("watched");
        assert !e2.isSelected();
        e2.click();
        assert e2.isSelected();
        e2.click();
        assert !e2.isSelected();
        WebElement e3=driver.findElementByName("playable");
        assert !e3.isSelected();
        e3.click();
        assert e3.isSelected();
        e3.click();
        assert e3.isSelected();
        e2.click();e3.click();
        assert (e2.isSelected()&&e3.isSelected());
        e2.click();e3.click();
        assert ((!e2.isSelected())&&(!e3.isSelected()));

        System.out.println("Success: testCheckBox2");

    }

    //电视剧
    private void testCheckBox3(){
        WebElement li1=driver.findElementByXPath("//div[@id='db-nav-movie']/div[2]/div[1]/ul[1]/li[4]/a");
        li1.click();
        WebElement select1=driver.findElementByXPath("//div[@class='sort']/label[1]/input");
        WebElement select2=driver.findElementByXPath("//div[@class='sort']/label[2]/input");
        WebElement select3=driver.findElementByXPath("//div[@class='sort']/label[3]/input");
        select1.click();
        assert (select1.isSelected()&&(!select2.isSelected())&&(!select3.isSelected()));
        select2.click();
        assert (!select1.isSelected()&&(select2.isSelected())&&(!select3.isSelected()));
        select3.click();
        assert (!select1.isSelected()&&(!select2.isSelected())&&(select3.isSelected()));

        WebElement e2=driver.findElementByName("watched");
        assert !e2.isSelected();
        e2.click();
        assert e2.isSelected();
        e2.click();
        assert !e2.isSelected();
        WebElement e3=driver.findElementByName("playable");
        assert !e3.isSelected();
        e3.click();
        assert e3.isSelected();
        e3.click();
        assert e3.isSelected();
        e2.click();e3.click();
        assert (e2.isSelected()&&e3.isSelected());
        e2.click();e3.click();
        assert ((!e2.isSelected())&&(!e3.isSelected()));

        System.out.println("Success: testCheckBox3");

    }


    public void run() throws Exception{
        testCheckBox1();
        Thread.sleep(1000);
        testCheckBox2();
        Thread.sleep(1000);
        testCheckBox3();
        Thread.sleep(1000);
    }

}
