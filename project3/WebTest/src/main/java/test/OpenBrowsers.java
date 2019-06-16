package test;

import org.openqa.selenium.chrome.ChromeDriver;

public class OpenBrowsers {


    public static void main(String args[]) throws Exception{

        System.setProperty("webdriver.chrome.driver","D:\\github\\SE213-software-test\\project3\\chromedriver-v74\\chromedriver.exe");

        ChromeDriver driver = new ChromeDriver();

        NavigateTest nt = new NavigateTest(driver);
        nt.run();

        LoginUtil lu=new LoginUtil();
        lu.addCookie(driver);
        lu.getCookie(driver);

        DropBoxTest dt = new DropBoxTest(driver);
        dt.run();

        CheckBoxTest ct = new CheckBoxTest(driver);
        ct.run();

        ButtonTest bt=new ButtonTest(driver);
        bt.run();

        InputTest it=new InputTest(driver);
        it.run();

        UploadFileTest uf = new UploadFileTest(driver);
        uf.run();


        System.out.println("\nall test passed.");
        Thread.sleep(1000);
        driver.quit();

    }
}
