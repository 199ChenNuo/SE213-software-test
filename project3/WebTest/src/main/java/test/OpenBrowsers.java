package test;

import org.openqa.selenium.chrome.ChromeDriver;

public class OpenBrowsers {


    public static void main(String args[]) throws Exception{
        System.setProperty("webdriver.chrome.driver","G:\\大三下\\软件测试\\hw3\\新建文件夹\\chromedriver.exe");

        ChromeDriver driver = new ChromeDriver();

        LoginUtil lu=new LoginUtil();
//        lu.addCookie(driver);
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

        Thread.sleep(1000);
        driver.quit();

    }
}
