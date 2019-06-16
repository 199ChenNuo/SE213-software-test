package test;

import org.openqa.selenium.Alert;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.interactions.Actions;

import java.util.List;
import java.util.concurrent.TimeUnit;


public class InputTest {

    final private static String url="https://movie.douban.com/";

    private ChromeDriver driver;

    public InputTest(ChromeDriver driver){
        this.driver=driver;
        driver.navigate().to(url);
    }

    private void testSearch(){
        WebElement searchBox=driver.findElementByXPath("//input[@id='inp-query']");
        WebElement submitBtn=driver.findElementByXPath("//div[@class='nav-search']/form/fieldset/div[2]/input");
        searchBox.sendKeys("火影忍者");
        submitBtn.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        assert driver.getCurrentUrl().contains("https://movie.douban.com/subject_search");

        List<WebElement> pageBtns=driver.findElementsByXPath("//div[@class='paginator sc-htoDjs eszZtj']/a");
        WebElement prevBtn=pageBtns.get(0);
        WebElement nextBtn=pageBtns.get(pageBtns.size()-1);

        assert driver.findElementByXPath("//div[@class='paginator sc-htoDjs eszZtj']/a[@class='num activate thispage']").getText().equals("1");

        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        assert driver.getCurrentUrl().contains("start=0");
        assert !prevBtn.isEnabled();
        assert nextBtn.isEnabled();

        nextBtn.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        assert driver.getCurrentUrl().contains("start=15");
        assert prevBtn.isEnabled();
        assert nextBtn.isEnabled();

        System.out.println("Success: testSearch");
    }

    private void testComment(String topic){
        driver.navigate().to(url);
        driver.manage().timeouts().implicitlyWait(20, TimeUnit.SECONDS);
        WebElement item=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[3]/div[1]/div[1]/div[1]/div[2]/a[1]",topic));
        String movieLink=item.getAttribute("href");

        //想看+评论
        Actions action = new Actions(driver);
        action.moveToElement(item).perform();
        WebElement btn=driver.findElementByXPath(String.format("//div[@class='gaia gaia-lite gaia-%s slide-mode']/div[1]/div[1]/div[1]/p[3]/a[1]",topic));
        btn.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        WebElement inputBox=driver.findElementByXPath("//textarea[@id='comment']");
        inputBox.sendKeys("233");
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        WebElement checkBox=driver.findElementByXPath("//input[@id='inp-private']");
        checkBox.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        WebElement submitBtn=driver.findElementByXPath("//div[@id='submits']/span/input");
        submitBtn.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);

        //取消想看
        driver.navigate().to(movieLink);
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        WebElement cancelBtn=driver.findElementByXPath("//div[@id='interest_sect_level']/div/span/span[2]/form/input");
        cancelBtn.click();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        Alert alert = driver.switchTo().alert();
        alert.accept();
        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);

        System.out.println("Success: testComment");
    }

    public void run() throws Exception{
        testSearch();
        Thread.sleep(1000);
        testComment("movie");
        Thread.sleep(1000);
    }}
