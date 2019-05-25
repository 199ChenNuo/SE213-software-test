package test;

import org.openqa.selenium.By;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

import java.util.Iterator;
import java.util.List;
import java.util.Set;

public class NavigateTest {

    final private static String url="https://www.douban.com/";

    private ChromeDriver driver;

    public NavigateTest(ChromeDriver driver){
        this.driver=driver;
        driver.navigate().to(url);
    }

    /* click a tag & open a new tab, test if correct */
    private void assertSubTabLink(WebElement link, String exceptedUrl) {
        /* mark current Tab */
        String current = driver.getWindowHandle();

        /* get new Tab handler */
        Set<String> old_handlers = driver.getWindowHandles();
        link.click();
        Set<String> new_handlers = driver.getWindowHandles();
        new_handlers.removeAll(old_handlers);
        assert (new_handlers.size()==1);

        /* assert url correct */
        Iterator<String> it = new_handlers.iterator();
        String hdl = it.next();
        driver.switchTo().window(hdl);
        assert driver.getCurrentUrl().contains(exceptedUrl);
        System.out.println("AssertOK: " + exceptedUrl);

        /* close new Tab */
        driver.close();
        new_handlers = driver.getWindowHandles();
        new_handlers.removeAll(old_handlers);
        assert (new_handlers.size()==0);

        /* restore current handle */
        driver.switchTo().window(current);
    }

    /* 读书 - 豆品 navigation, open a new Tab in driver */
    private void testTopLinks() {
        /* top links bar */
        WebElement topbar =  driver.findElementById("anony-nav");
        WebElement links = topbar.findElement(By.className("anony-nav-links"));
        assert links.getText().equals("豆瓣读书 豆瓣电影 豆瓣音乐 豆瓣小组 豆瓣同城 豆瓣FM 豆瓣时间 豆瓣豆品");

        /* assert link number */
        List<WebElement> link_list = links.findElements(By.tagName("li"));
        assert (link_list.size() == 8);

        /* assert Link url */
        assertSubTabLink(link_list.get(0), "https://book.douban.com/");
        assertSubTabLink(link_list.get(1), "https://movie.douban.com/");
        assertSubTabLink(link_list.get(2), "https://music.douban.com/");
        assertSubTabLink(link_list.get(3), "https://www.douban.com/group/explore");
        assertSubTabLink(link_list.get(4), "https://shanghai.douban.com/");
        assertSubTabLink(link_list.get(5), "https://douban.fm");
        assertSubTabLink(link_list.get(6), "https://m.douban.com/time/");
        assertSubTabLink(link_list.get(7), "https://market.douban.com/");
    }

    private void testAlbum() {
        /* find album links */
        WebElement grid_element = driver.findElementById("anony-sns");
        WebElement album = grid_element.findElement(By.className("albums"));
        List<WebElement> links = album.findElements(By.tagName("a"));

        /* assert url jump */
        links.get(0).click();
        String current_url = driver.getCurrentUrl();
        assert current_url.contains("https://www.douban.com/photos/album/");
        System.out.println("AssertOK: " + "album check");

        /* return main page */
        driver.navigate().to(url);
    }

    private void testNote() {
        /* find note links */
        WebElement grid_element = driver.findElementById("anony-sns");
        WebElement note = grid_element.findElement(By.className("notes"));
        List<WebElement> links = note.findElements(By.tagName("a"));

        /* assert url jump */
        links.get(0).click();
        String current_url = driver.getCurrentUrl();
        assert current_url.contains("https://www.douban.com/note/");
        System.out.println("AssertOK: " + "note check");

        /* return main page */
        driver.navigate().to(url);
    }

    private void testTopic() {
        /* find topic links */
        WebElement grid_element = driver.findElementById("anony-sns");
        List<WebElement> topic_link = grid_element.findElements(By.className("rec_topics_name"));

        /* assert url jump */
        topic_link.get(0).click();
        String current_url = driver.getCurrentUrl();
        assert current_url.contains("https://www.douban.com/gallery/topic/");
        System.out.println("AssertOK: " + "topic check");

        /* return main page */
        driver.navigate().to(url);

    }

    public void run() throws Exception{
        testTopLinks();
        Thread.sleep(1000);
        testAlbum();
        Thread.sleep(1000);
        testNote();
        Thread.sleep(1000);
        testTopic();
        Thread.sleep(1000);
    }
}
