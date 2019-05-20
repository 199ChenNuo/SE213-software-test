package test;

import org.openqa.selenium.chrome.ChromeDriver;

public class OpenBrowsers {


    public static void main(String args[]) throws Exception{
        System.setProperty("webdriver.chrome.driver","/Users/myu/Downloads/chromedriver-2");

        ChromeDriver driver = new ChromeDriver();

        LoginUtil lu=new LoginUtil();
        //lu.addCookie(driver);
        lu.getCookie(driver);

        ButtonTest bt=new ButtonTest(driver);
        bt.run();

        InputTest it=new InputTest(driver);
        it.run();

        Thread.sleep(1000);
        driver.quit();

    }
}
