package test;

import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.interactions.Actions;

import java.io.*;
import java.util.StringTokenizer;
import java.util.concurrent.TimeUnit;

public class UploadFileTest {
    final private static String url="https://www.douban.com/";

    private ChromeDriver driver;

    public UploadFileTest(ChromeDriver driver){
        this.driver=driver;
        driver.navigate().to(url);
    }

    private void testUploadPic(){
        driver.get("https://accounts.douban.com/passport/setting");
        WebElement upldAtrBtn=driver.findElementByXPath("//div[@class='account-wrap']/div[1]/div[2]/div[1]/div[1]/div[1]/input");
        File file = new File("C:\\Users\\31600\\Pictures\\me.jpg");
        upldAtrBtn.sendKeys(file.getPath());
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);

        WebElement submitBtn = driver.findElementByXPath("//div[@class='ui-dialog-mountnode']/div[1]/div[1]/div[1]/div[2]/div[1]/div[1]/div[3]/button[1]");
        submitBtn.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);

        System.out.println("Success: uploadPic");
    }

    private void writeNote(){
        driver.navigate().to(url);
        driver.manage().timeouts().implicitlyWait(20, TimeUnit.SECONDS);

        WebElement writeBtn = driver.findElementByXPath("//div[@class='article']/div[2]/div[1]/form/ul/li[4]/a");
        writeBtn.click();

        // 进入写日记页面

        WebElement header = driver.findElementByXPath("//textarea[@class='note-editor-input']");
        header.sendKeys("这是标题");
        driver.manage().timeouts().implicitlyWait(20, TimeUnit.SECONDS);
        
        WebElement retBtn = driver.findElementByXPath("//div[@class='nav-logo']/a");
        retBtn.click();
        driver.switchTo().alert().dismiss();

        assert(driver.getCurrentUrl().equals("https://www.douban.com/note/create"));
        System.out.println("Success: modal box [dismiss]");

        driver.manage().timeouts().implicitlyWait(20, TimeUnit.SECONDS);

        retBtn.click();
        driver.switchTo().alert().accept();

        assert (driver.getCurrentUrl().equals("https://www.douban.com"));

        System.out.println("Success: modal box [accept]");
    }

    public void run() throws Exception{
        testUploadPic();
        Thread.sleep(1000);

        writeNote();
        Thread.sleep(1000);
    }

}
