package test;

import org.openqa.selenium.Cookie;
import org.openqa.selenium.chrome.ChromeDriver;

import java.io.*;
import java.util.Date;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.concurrent.TimeUnit;

public class LoginUtil {

    final private static String phone="13262615836";
    final private static String pwd="doubandemima&22";

    void addCookie(ChromeDriver driver) throws Exception{
        driver.get("https://accounts.douban.com/passport/login?source=movie");
        ((ChromeDriver) driver).findElementByXPath("//div[@class='account-body-tabs']/ul[@class='tab-start']/li[2]").click();
        ((ChromeDriver) driver).findElementById("username").sendKeys(phone);
        ((ChromeDriver) driver).findElementById("password").sendKeys(pwd);
        ((ChromeDriver) driver).findElementByCssSelector("a.btn.btn-account").click();

        driver.manage().timeouts().implicitlyWait(10, TimeUnit.SECONDS);
        driver.findElementByXPath("//div[@id='db-global-nav']/div/div[4]/ul/li[3]").click();

        System.out.println(driver.getCurrentUrl());
        Set<Cookie> cookies = driver.manage().getCookies();
        File cookieFile = new File("douban.cookie.txt");

        try {
            cookieFile.delete();
            cookieFile.createNewFile();
            FileWriter fileWriter = new FileWriter(cookieFile);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            for (Cookie cookie:cookies){
                bufferedWriter.write((cookie.getName()+";"+
                        cookie.getValue()+";"+
                        cookie.getDomain()+";"+
                        cookie.getPath()+";"+
                        cookie.getExpiry()+";"+
                        cookie.isSecure()));
                bufferedWriter.newLine();
            }
            bufferedWriter.flush();
            bufferedWriter.close();
            fileWriter.close();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

    }

    void getCookie(ChromeDriver driver){
        driver.navigate().to("https://www.douban.com/");
        try {
            File cookieFile = new File("douban.cookie.txt");
            FileReader fileReader = new FileReader(cookieFile);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            String line;

            while ((line = bufferedReader.readLine()) != null){
                StringTokenizer stringTokenizer = new StringTokenizer(line, ";");
                while (stringTokenizer.hasMoreTokens()){

                    String name = stringTokenizer.nextToken();
                    String value = stringTokenizer.nextToken();
                    String domain = stringTokenizer.nextToken();
                    String path = stringTokenizer.nextToken();
                    Date expiry = null;
                    String dt;

                    if (!(dt = stringTokenizer.nextToken()).equals("null")){
                        expiry = new Date(dt);
                    }

                    boolean isSecure = new Boolean(stringTokenizer.nextToken()).booleanValue();
                    Cookie cookie = new Cookie(name, value,domain,path,expiry,isSecure);
                    driver.manage().addCookie(cookie);
                }
            }
            driver.navigate().refresh();
        } catch (Exception e) {
            // TODO Auto-generated catch block
            System.out.println("create file failed.");
            e.printStackTrace();
        }

    }

}
