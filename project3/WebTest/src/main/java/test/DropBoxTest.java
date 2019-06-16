package test;

import org.openqa.selenium.NoSuchElementException;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

import java.util.List;

public class DropBoxTest {

    final private static String url="https://movie.douban.com/";

    private ChromeDriver driver;

    private boolean doesElementExist(String s)
    {

        try
        {
            driver.findElementByXPath(s);
            return true;
        }
        catch (NoSuchElementException e)
        {
            return false;
        }
    }

    public DropBoxTest(ChromeDriver driver){
        this.driver=driver;
        driver.navigate().to(url);
    }

    private void testDropBox(){
        WebElement li1=driver.findElementByXPath("//div[@id='db-nav-movie']/div[2]/div[1]/ul[1]/li[6]/a");
        li1.click();
        WebElement li2=driver.findElementByXPath("//div[@id='app']/div[1]/div[1]/div[1]/ul[1]/li[2]");
        li2.click();
        WebElement d1=driver.findElementByXPath("//div[@class='range']/div[1]/span");
        assert (d1.getAttribute("class").equals("angle-down"));
        d1.click();
        assert (d1.getAttribute("class").equals("angle-up"));
        d1.click();
        assert (d1.getAttribute("class").equals("angle-down"));
        assert !doesElementExist("//div[@class='range-dropdown']");
        d1.click();
        assert (d1.getAttribute("class").equals("angle-up"));
        assert doesElementExist("//div[@class='range-dropdown']");
        WebElement d2=driver.findElementByXPath("//div[@class='slider slider-range']");
        assert (d2.getAttribute("value").equals("0,10"));
        WebElement r1=driver.findElementByXPath("//div[@class='slider-wrap']/div[1]");
//        WebElement r2=driver.findElementByXPath("//div[@class='slider-wrap']/div[2]");
//        r2.click();
//        assert (d2.getAttribute("value").equals("1,10"));
//        WebElement r3=driver.findElementByXPath("//div[@class='slider-wrap']/div[3]");
//        r3.click();
//        assert (d2.getAttribute("value").equals("2,10"));
        System.out.println("Success: testDropBox1");
    }

    public void run() throws Exception{
        testDropBox();
        Thread.sleep(1000);

    }

}
