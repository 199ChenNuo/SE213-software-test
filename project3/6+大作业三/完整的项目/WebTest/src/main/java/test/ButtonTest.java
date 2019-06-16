package test;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

import java.util.List;

public class ButtonTest {

    final private static String url="https://movie.douban.com/";

    private ChromeDriver driver;

    public ButtonTest(ChromeDriver driver){
        this.driver=driver;
        driver.navigate().to(url);
    }

    // 正在热映
    private void testSlideButton1(){
        WebElement nextBtn=driver.findElementByXPath("//div[@id='screening']/div[1]/div[1]/span[2]/a");
        WebElement prevBtn=driver.findElementByXPath("//div[@id='screening']/div[1]/div[1]/span[1]/a");

        String slideStyle=driver.findElementByXPath("//div[@id='screening']/div[2]/ul").getAttribute("style");

        String pageIndex=driver.findElementByXPath("//div[@id='screening']/div[1]/div[2]/span[1]").getText();
        assert pageIndex.equals("1");
        assert !prevBtn.isEnabled();
        assert nextBtn.isEnabled();

        driver.executeScript("arguments[0].scrollIntoView();", nextBtn);
        nextBtn.click();

        String slideStyle2=driver.findElementByXPath("//div[@id='screening']/div[2]/ul").getAttribute("style");
        assert !slideStyle.equals(slideStyle2);
        String pageIndex2=driver.findElementByXPath("//div[@id='screening']/div[1]/div[2]/span[1]").getText();
        assert pageIndex2.equals("2");

        assert prevBtn.isEnabled();
        assert nextBtn.isEnabled();

        prevBtn.click();

        String slideStyle3=driver.findElementByXPath("//div[@id='screening']/div[2]/ul").getAttribute("style");
        assert slideStyle.equals(slideStyle3);
        String pageIndex3=driver.findElementByXPath("//div[@id='screening']/div[1]/div[2]/span[1]").getText();
        assert pageIndex3.equals("1");

        System.out.println("Success: testSlideButton(正在热映)");
    }

    // 最近热门(电影/电视剧）
    private void testSlideButton2(String topic){
        WebElement nextBtn=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/a[2]",topic));
        WebElement prevBtn=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/a[1]",topic));

        String slideStyle=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[1]/div",topic)).getAttribute("style");

        assert prevBtn.isEnabled();
        assert nextBtn.isEnabled();

        assert driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/div[@class='dot activate']",topic)).getAttribute("data-index").equals("1");

        driver.executeScript("arguments[0].scrollIntoView();", nextBtn);
        nextBtn.click();

        String slideStyle2=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[1]/div",topic)).getAttribute("style");
        assert !slideStyle.equals(slideStyle2);

        assert driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/div[@class='dot activate']",topic)).getAttribute("data-index").equals("2");

        prevBtn.click();

        String slideStyle3=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[1]/div",topic)).getAttribute("style");
        assert slideStyle.equals(slideStyle3);


        assert driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/div[@class='dot activate']",topic)).getAttribute("data-index").equals("1");

        prevBtn.click();

        String slideStyle4=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[1]/div",topic)).getAttribute("style");
        assert slideStyle.equals(slideStyle4);

        assert driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/div[@class='dot activate']",topic)).getAttribute("data-index").equals("4");

        System.out.printf("Success: testSlideButton(最近热门%s)\n", topic);
    }

    //热门推荐
    private void testSlideButton3() throws Exception{
        WebElement nextBtn=driver.findElementByXPath("//div[@id='gallery-frames']/div[1]/div[1]/span[2]/a");
        WebElement prevBtn=driver.findElementByXPath("//div[@id='gallery-frames']/div[1]/div[1]/span[1]/a");

        String slideStyle=driver.findElementByXPath("//div[@id='gallery-frames']/div[2]/ul").getAttribute("style");

        Thread.sleep(5000);

        String slideStyle2=driver.findElementByXPath("//div[@id='gallery-frames']/div[2]/ul").getAttribute("style");
        assert !slideStyle.equals(slideStyle2);

        nextBtn.click();

        String slideStyle3=driver.findElementByXPath("//div[@id='gallery-frames']/div[2]/ul").getAttribute("style");
        assert !slideStyle3.equals(slideStyle2);

        prevBtn.click();

        String slideStyle4=driver.findElementByXPath("//div[@id='gallery-frames']/div[2]/ul").getAttribute("style");
        assert !slideStyle4.equals(slideStyle2);

        System.out.println("Success: testSlideButton(热门推荐)");
    }

    private void testTagButton(String topic) throws Exception{
       List<WebElement> tags=driver.findElementsByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[2]/h2/div[2]/form/div/div/label",topic));
//       WebElement nextBtn=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/a[2]",topic));
//       WebElement prevBtn=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[2]/a[1]",topic));
       driver.executeScript("arguments[0].scrollIntoView();", tags.get(0));
       for (WebElement tag:tags){
           tag.click();
//           Thread.sleep(200);
//           nextBtn.click();
//           Thread.sleep(200);
//           prevBtn.click();
           Thread.sleep(600);
       }
        System.out.printf("Success: testTagButton(最近热门%s)\n", topic);
    }



    public void run() throws Exception{
        testSlideButton1();
        Thread.sleep(1000);
        testSlideButton2("movie");
        Thread.sleep(1000);
        testSlideButton2("tv");
        Thread.sleep(1000);
        testSlideButton3();
        testTagButton("movie");
        testTagButton("tv");
    }

}
