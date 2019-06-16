Action()
{
	lr_start_transaction("action");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.1; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.1; DOMAIN=images3.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=images3.ctrip.com");

	web_add_cookie("_ga=GA1.2.1321118040.1560502562; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_gid=GA1.2.605844668.1560502562; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfi=p1%3D102001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=crm.ws.ctrip.com");

	web_url("hotels.ctrip.com", 
		"URL=https://hotels.ctrip.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/accor/bgindex.jpg", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/accor/icon3228/ksrl.png", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/accor/icon3228/hyjf.png", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/accor/icon3228/kfsj.png", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/ubt/_bfa.min.js?v=20195_14.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResPackageOnline/R10/js/min/SSH.src.js?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/js.merge/base-bmap.js?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/js.merge/searchhotel.js?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/cQuery_110421.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/pcfloat.min.js?v=20160329", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/remarketing.js", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/accor/icon3228/hyzk.png", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/accor/logoform-s62.png", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/common/marinRedirect.js?v=20190614", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/resaresonline/risk/ubtrms/latest/default/rms.js?v=20190614", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/floating_normal.min.js?20190614", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/animate-1.0.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/qCode.min.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/yUtil.min.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/css/pc_flaot.css", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/__nts.js?v=201941516259", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/AdCallProxyV2.aspx?siteids=&sitetype=HTLCITY&biztype=301&adlist=%5b%7b%22pagecode%22%3a%221%22%2c%22domid%22%3a%22divAllyes%22%2c%22type%22%3a%220%22%7d%2c%7b%22pagecode%22%3a%222%22%2c%22domid%22%3a%22divAllyes06%22%2c%22type%22%3a%220%22%7d%2c%7b%22pagecode%22%3a%223%22%2c%22domid%22%3a%22divAllyes07%22%2c%22type%22%3a%220%22%7d%2c%7b%22pagecode%22%3a%224%22%2c%22domid%22%3a%22divDailySpecial%22%2c%22type%22%3a%220%22%7d%5d&fscreen=0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=g&d="
		"%7B%22c%22%3A%5B102001%2C%221560502546417.3r3pnm%22%2C1%2C1%2C%223432882740301917509%22%2C%22%3B%22%2C%22%22%2C%222.6.9%22%2C%221rg74qu-puplht-zf90ov%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%5D%2C%22d%22%3A%7B%22uinfo%22%3A%5B13%2C0%2C0%2C%22https%3A%2F%2Fhotels.ctrip.com%2F%22%2C1536%2C864%2C%22cl%3D71%2Cckl%3D2%22%2C%22zh-cn%22%2C%22%22%2C%22%22%2C%22%22%2C%22%3B%22%2C1%2C0%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C"
		"%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%2C1.25%2C1%2C%22%7B%5C%22tz%5C%22%3A480%2C%5C%22dt%5C%22%3Afalse%2C%5C%22rg%5C%22%3A%5C%22%5C%22%2C%5C%22lang%5C%22%3A%5C%22%5C%22%7D%22%2C%22%22%2C%22%22%2C%22%22%5D%7D%7D&mt=1560502549456&jv=2.6.9", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/thirdPart.js?v=201941516259", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/address-1.0_calendar-6.0_dropBox-1.0_notice-1.0_tab-1.2_validate-1.1.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/sideBar-2.0.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/resaresonline/risk/ubtrms/d.min.1165b232.js", ENDITEM, 
		"Url=https://images3.ctrip.com/ad/banner/2012/11/3006jingq.png", ENDITEM, 
		"Url=https://images3.ctrip.com/ad/banner/2012/11/3001daxue.png", ENDITEM, 
		"Url=https://images3.ctrip.com/ad/banner/2012/11/3007shangq.png", ENDITEM, 
		"Url=https://images3.ctrip.com/ad/banner/2012/11/3005jich.png", ENDITEM, 
		"Url=https://images3.ctrip.com/ad/banner/2013/03/Ditie.png", ENDITEM, 
		"Url=https://images3.ctrip.com/ad/banner/2012/11/3008yiy.png", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/s.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/mba_ctrip.js", ENDITEM, 
		"Url=https://pic.c-ctrip.com/common/un_sidebar.png", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/Ajax/DyRequest.aspx?v2=true&biztype=301&pageid=1&callback=G_Ad_DyLoad_1.DyLoad&_rm=0.5934432711028392", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/Ajax/DyRequest.aspx?v2=true&biztype=301&pageid=2&callback=G_Ad_DyLoad_2.DyLoad&_rm=0.9998605147015538", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700r15000000xeo67225D_780_235_105.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700p13000000tgg3n7D1D_780_235_105.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700b14000000wap4h53BF_780_235_105.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=hotel.adimpression&val=version%3D1.0%26channelid%3D4%26moduleid%3Dhod_hp_ad_def%26hoteladvertiseid_list%3D1154%2C477%2C169%2C949%2C960%2C807%2C580%2C579%2C1044&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=sumadpv&val=UserId%3D1560502546417.3r3pnm%26PageId%3D102001%26PositionIdVSAdId%3D100590%3A573350%26SiteID%3D%26SiteType%3DHTLCITY&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=brovserVersion&val=Chrome&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=sumadpv&val=UserId%3D1560502546417.3r3pnm%26PageId%3D102001%26PositionIdVSAdId%3D100582%3A579764-100583%3A579197-100584%3A577837-100585%3A579690-100586%3A575159-100587%3A579883-100588%3A577981-100589%3A579604%26SiteID%3D%26SiteType%3DHTLCITY&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=sumadpv&val=UserId%3D1560502546417.3r3pnm%26PageId%3D102001%26PositionIdVSAdId%3D100591%3A560482%26SiteID%3D%26SiteType%3DHTLCITY&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=hod_hp_hot_hotel&val=%7B%22city%22%3A%222%22%2C%22hotellist%22%3A%22441351_1_hothotel_F%2C425164_2_hothotel_F%2C378777_3_hothotel_F%2C473770_4_hothotel_F%2C433981_5_hothotel_F%2C6278770_6_hothotel_F%2C6657909_7_hothotel_F%2C346412_8_hothotel_F%22%7D&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://pages.c-ctrip.com/hotel/201902/familyroom/entrance370x166.png", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-3748357-1&cid=1321118040.1560502562&jid=1348800090&_gid=605844668.1560502562&gjid=387060781&_v=j76&z=1378572508", ENDITEM, 
		"Url=https://dat.gtags.net/imp/dasp3?a=9&ext_args=&vc=1&vt=0&vpc=1&rvt=0&fr=1&vrt=0&ot=4&u=https:%2F%2Fhotels.ctrip.com%2F&sc=1536*864&ch=UTF-8&la=zh-CN&ti=%E3%80%90%E6%90%BA%E7%A8%8B%E9%85%92%E5%BA%97%E3%80%91%E9%85%92%E5%BA%97%E9%A2%84%E8%AE%A2%2C%E9%85%92%E5%BA%97%E4%BB%B7%E6%A0%BC%E6%9F%A5%E8%AF%A2%2C%E5%AE%BE%E9%A6%86%E4%BD%8F%E5%AE%BF%E6%8E%A8%E8%8D%90%2C%E7%BD%91%E4%B8%8A%E8%AE%A2%E9%85%92%E5%BA%97&v=3.0.0.9&t=1&r=0.157042582612144", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700h0y000000mfkqf4FA8_580_90_106.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700p15000000xni1hCC0C_780_235_105.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700515000000xh1rrA4EE_780_235_105.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700e15000000xi4ah20D0_780_235_105.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDIwMDEsIjE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMYlzM0MzI4ODI3NDAzMDE5MTc1MDkiLCI7AwEDAYQyLjYuBAWVMXJnNzRxdS1wdXBsaHQtemY5MG92AxoDGgMaAxoDGgMahm9ubGluZQRWgnsiB1uHOiJjbGljawMphXhwYXRoAwqeSFRNTC9CT0RZW0BpZD0nbWFpbmJvZHknXS9GT1JNBg-KYXNwbmV0Rm9ybQMOhkRJVlszXQYfh2Jhc2VfYmQDGwMKgS8ECoIyXQYpi0pfc2VhcmNoQm94AykDGIEvAxmZL0xBQkVMW0B4PSctNTQ5J11bQHk9JzI3NwQGgXIDD4IzNAQJgXIDB4QxMSddA4EThHRzIjoHgT6JNjExMDE2fV1d&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDIwMDEsIjE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMYlzM0MzI4ODI3NDAzMDE5MTc1MDkiLCI7AwEDAYQyLjYuBAWVMXJnNzRxdS1wdXBsaHQtemY5MG92AxoDGgMaAxoDGgMahm9ubGluZQRWgnsiB1uHOiJjbGljawMphXhwYXRoAwqeSFRNTC9CT0RZW0BpZD0nbWFpbmJvZHknXS9GT1JNBg-KYXNwbmV0Rm9ybQMOhkRJVlszXQYfh2Jhc2VfYmQDGwMKgS8ECoIyXQYpi0pfc2VhcmNoQm94AykDGIEvAxmPL0xBQkVMWzJdL0lOUFVUBkSXSl9Ib3RlbFNjZW5lJ11bQHg9Jy00NjcEB4Z5PScyNzgEDYFyAwuCMzgEEIFyAweEMTEnXQOBJoR0cyI6B4FRiTYxMDA4M31dXQ~~&"
		"jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d="
		"s1tbMiwidXNlcmFjdGlvbiJdLFsxMDIwMDEsIjE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMYlzM0MzI4ODI3NDAzMDE5MTc1MDkiLCI7AwEDAYQyLjYuBAWVMXJnNzRxdS1wdXBsaHQtemY5MG92AxoDGgMaAxoDGgMahm9ubGluZQRWgnsiB1uHOiJjbGljawMphXhwYXRoAwqeSFRNTC9CT0RZW0BpZD0nbWFpbmJvZHknXS9GT1JNBg-KYXNwbmV0Rm9ybQMOhkRJVlszXQYfh2Jhc2VfYmQDGwMKgS8ECoIyXQYpi0pfc2VhcmNoQm94AykDGIEvBhYGNYlKX1N3aXRjaFMFDQMzh1RBQkxFL1QES4wvVFIvVEQvSU5QVVQGUYZ0eHRDaXQDTZJbQHg9Jy00NTUnXVtAeT0nMzEFBYFyAw6CMjgECIFyAwaDOCddA4EthHRzIjoHgViJNjExNjczfV1d&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDIwMDEsIjE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMYlzM0MzI4ODI3NDAzMDE5MTc1MDkiLCI7AwEDAYQyLjYuBAWVMXJnNzRxdS1wdXBsaHQtemY5MG92AxoDGgMaAxoDGgMahm9ubGluZQRWgnsiB1uHOiJjbGljawMphXhwYXRoAwqeSFRNTC9CT0RZW0BpZD0nbWFpbmJvZHknXS9GT1JNBg-KYXNwbmV0Rm9ybQMOhkRJVlszXQYfh2Jhc2VfYmQDGwMKgS8ECoIyXQYpi0pfc2VhcmNoQm94AykDGIEvAxmML0xBQkVML0lOUFVUBkGXSl9Ib3RlbFJhZGlvJ11bQHg9Jy01NDkEB4Z5PScyNzcEDYFyAwuCMjQEEIFyAweEMTAnXQOBI4R0cyI6B4FOiTYxMTAxOH1dXQ~~&jv="
		"1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102001&key=sumadpv&val=UserId%3D1560502546417.3r3pnm%26PageId%3D102001%26PositionIdVSAdId%3D100592%3A554751%26SiteID%3D%26SiteType%3DHTLCITY&pv=1560502546417.3r3pnm.1.1&duid=&env=online&v=6&mt=1560502573085&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d="
		"s1tbMiwidXNlcmFjdGlvbiJdLFsxMDIwMDEsIjE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMYlzM0MzI4ODI3NDAzMDE5MTc1MDkiLCI7AwEDAYQyLjYuBAWVMXJnNzRxdS1wdXBsaHQtemY5MG92AxoDGgMaAxoDGgMahm9ubGluZQRWgnsiB1uHOiJjbGljawMphXhwYXRoAwqeSFRNTC9CT0RZW0BpZD0nbWFpbmJvZHknXS9GT1JNBg-KYXNwbmV0Rm9ybQMOhkRJVlszXQYfh2Jhc2VfYmQDGwMKgS8ECoIyXQYpi0pfc2VhcmNoQm94AykDGIEvBhYGNYlKX1N3aXRjaFMFDQMzh1RBQkxFL1QES4wvVFIvVEQvSU5QVVQGUYZ0eHRDaXQDTZNbQHg9Jy00MjAnXVtAeT0nMzI3BAaBcgMPgjYzBAmBcgMHBAwDgSuEdHMiOgeBVok2MDY2Njh9XV0~&jv=1.0.0", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(5);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=75", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://pic.c-ctrip.com/platform/online/home/sprite2019527.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-9,065,053,779,646,194,811", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/hotels/index/un_index.png?180105.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/pri_index130417.css?releaseno=2019-06-13-12-01-15?releaseno=2019-06-13-12-01-15.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/platform/online/home/un_icon_index_type20170111.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-9,065,053,779,646,194,811", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/flagship/store/hyatt/un_index_hyatt_v1.png?180130.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/pri_index130417.css?releaseno=2019-06-13-12-01-15?releaseno=2019-06-13-12-01-15.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/common/c_logo2013.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-9,065,053,779,646,194,811", ENDITEM, 
		"Url=https://pic.c-ctrip.com/hotels_seo/landmark_search_bg.jpg", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/pri_index130417.css?releaseno=2019-06-13-12-01-15?releaseno=2019-06-13-12-01-15.css", ENDITEM, 
		LAST);

	web_url("geturl.php", 
		"URL=http://config.pinyin.sogou.com/api/toolbox/geturl.php?h=ED32A4EFB7CB43DF1920E8BA201D9D92&v=9.1.0.2680&r=0000_sogou_pinyin_65i", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/platform/online/home/un_header_language_1807.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-9,065,053,779,646,194,811", ENDITEM, 
		LAST);

	web_url("AjaxGetCookie.ashx", 
		"URL=https://accounts.ctrip.com/member/ajax/AjaxGetCookie.ashx?jsonp=BuildHTML&r=0.684830783880731&encoding=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/platform/online/home/phone_list20180116.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-9,065,053,779,646,194,811", ENDITEM, 
		LAST);

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.1; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=hotels.ctrip.com");

	lr_think_time(9);

	web_custom_request("AjaxGetHotelAddtionalInfo.ashx", 
		"URL=https://hotels.ctrip.com/Domestic/tool/AjaxGetHotelAddtionalInfo.ashx?browseData=1&from=0&viewCount=3&traceid=3432882740301917509", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);
	

	lr_start_transaction("submit1");

	
	
	web_add_auto_header("Origin", 
		"https://hotels.ctrip.com");

	web_submit_data("AjaxIndexHotSaleHotelNew.aspx", 
		"Action=https://hotels.ctrip.com/Domestic/Tool/AjaxIndexHotSaleHotelNew.aspx?traceid=3432882740301917509", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=city", "Value=2", ENDITEM, 
		"Name=cityName", "Value=上海", ENDITEM, 
		"Name=cityPY", "Value=Shanghai", ENDITEM, 
		"Name=type", "Value=0", ENDITEM, 
		"Name=cityip", "Value=0", ENDITEM, 
		"Name=psid", "Value=", ENDITEM, 
		LAST);

	web_submit_data("AjaxThemeLandMark.aspx", 
		"Action=https://hotels.ctrip.com/Domestic/Tool/AjaxThemeLandMark.aspx?city=1", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=cityId", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	lr_think_time(7);

	web_url("AjaxGetUserSearchBehavior.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetUserSearchBehavior.aspx?callback=_json0&t=1560502546510", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/common/loading_48.gif", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/pri_index130417.css?releaseno=2019-06-13-12-01-15?releaseno=2019-06-13-12-01-15.css", ENDITEM, 
		LAST);

	lr_end_transaction("submit1", LR_AUTO);

	web_add_cookie("_ga=GA1.2.1321118040.1560502562; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_gid=GA1.2.605844668.1560502562; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_bfi=p1%3D102001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=hotels.ctrip.com");

	web_url("AjaxGetHotKeyword.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetHotKeyword.aspx?cityid=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("__zpspc=9.1.1560502594.1560502594.1%234%7C%7C%7C%7C%7C%23; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_jzqco=%7C%7C%7C%7C%7C1.552586726.1560502594109.1560502594109.1560502594109.1560502594109.1560502594109.0.0.0.1.1; DOMAIN=hotels.ctrip.com");

	web_add_cookie("HotelCityID=2split%E5%8C%97%E4%BA%ACsplitShanghaisplit2019-06-14split2019-06-17split5; DOMAIN=hotels.ctrip.com");

	web_url("AjaxGetCitySuggestion.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetCitySuggestion.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMNzUuMC4zNzcwLjkwGikIBRABGhsKDQgFEAYYASIDMDAxMAEQ_c8GGgIYCWjahQoiBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABEIiJBhoCGAmwcezQIgQgASACKAEaKQgHEAEaGwoNCAcQBhgBIgMwMDEwARCZuwUaAhgJfB9ULCIEIAEgAigBGicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAlBsHBMIgQgASACKAMaKAgBEAgaGgoNCAEQCBgBIgMwMDEwBBCJFxoCGAlRun4IIgQgASACKAQaJwgJEAEaGQoNCAkQBhgBIgMwMDEwBhACGgIYCVWiCvciBCABIAIoBhonCA8QARoZCg0IDxAGGAEiAzAwMTABEGIaAhgJYgVkPiIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQExoCGAn2WADvIgQgASACKAEaJwgKEAgaGQoNCA"
		"oQCBgBIgMwMDEwARAFGgIYCXAaLyQiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEIQGGgIYCUKeVlkiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEPQ8GgIYCf_G_DMiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEM6UBhoCGAktQOsQIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDU2wEaAhgJ8rDQ4CIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://hotels.ctrip.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("_jzqco=%7C%7C%7C%7C1560502691624%7C1.552586726.1560502594109.1560502594109.1560502685368.1560502594109.1560502685368.undefined.0.0.2.2; DOMAIN=m.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=m.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.3; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfs=1.3; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfi=p1%3D102002%26p2%3D102002%26v1%3D3%26v2%3D2; DOMAIN=hotels.ctrip.com");

	web_submit_data("zone28star5", 
		"Action=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=NOVIEWSTATE", "Value=/wEPDwULLTE0Njc1NDMzNTFkZEdd+SwmZyquG9LogTyqiNpr3UsQw9/bnzl/OdVnISfr", ENDITEM, 
		"Name=__VIEWSTATEGENERATOR", "Value=AEF82FC0", ENDITEM, 
		"Name=hotelChoose", "Value=on", ENDITEM, 
		"Name=CityName", "Value=上海", ENDITEM, 
		"Name=cityId", "Value=2", ENDITEM, 
		"Name=cityPY", "Value=shanghai", ENDITEM, 
		"Name=SSH_CheckIn", "Value=2019-06-14", ENDITEM, 
		"Name=HotelCityName", "Value=北京", ENDITEM, 
		"Name=checkIn", "Value=2019-06-14", ENDITEM, 
		"Name=checkOut", "Value=2019-06-17", ENDITEM, 
		"Name=hotellevel", "Value=5", ENDITEM, 
		"Name=keywordNew", "Value=人民广场地区", ENDITEM, 
		"Name=RoomGuestCount", "Value=1,2,0", ENDITEM, 
		"Name=hasListForInitHotHotel", "Value=", ENDITEM, 
		"Name=_releaseNo_", "Value=2019-06-13-12-01-15", ENDITEM, 
		"Name=__action", "Value=/Domestic/ShowHotelList.aspx", ENDITEM, 
		"Name=cityId", "Value=2", ENDITEM, 
		"Name=cityPY", "Value=Shanghai", ENDITEM, 
		"Name=positionArea", "Value=Zone", ENDITEM, 
		"Name=positionId", "Value=28", ENDITEM, 
		"Name=keyword", "Value=人民广场地区", ENDITEM, 
		"Name=requestTravelMoney", "Value=", ENDITEM, 
		"Name=isfromindex", "Value=1", ENDITEM, 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/htlpic/hotels/searchresult/un_searchresult.png?171212.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/common/icon_hotel_v2.png?180822.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/hotels121118/bg_nopic1.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/hotels/searchresult/un_map_spot.png?20170814.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/hotels121118/un_ico_searchresult.png?2013320.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/common/banner_login.png?180626.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.5/default/js/data/data.message.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/resh5websdkonline/R3/min/js-apss.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/cusersdk/~0.0.8/default/login/1.0.0/loginsdk.min.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.10/default/js/data/login.defaultconfig.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.3/default/js/util/checkformat.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.5/default/js/data/data.url.js", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=g&d="
		"%7B%22c%22%3A%5B102002%2C%221560502546417.3r3pnm%22%2C1%2C2%2C%222855443416156757842%22%2C%22A%3BM%3A98%2C181012_hod_znpx%3AB%3B%22%2C%22%22%2C%222.6.9%22%2C%221rg74qu-puplht-zf90ov%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%5D%2C%22d%22%3A%7B%22uinfo%22%3A%5B13%2C102001%2C1%2C%22https%3A%2F%2Fhotels.ctrip.com%2Fhotel%2Fshanghai2%2Fzone28star5%23ctm_ref%3Dhod_hp_sb_lst%22%2C1536%2C864%2C%22cl%3D621%2Cckl%3D12%22%2C%22zh-cn%22%2C%22%22%2C%22%22%2C%22https%3A%2F%2Fhotels.ctrip.co"
		"m%2F%22%2C%22A%3BM%3A98%2C181012_hod_znpx%3AB%3B%22%2C0%2C0%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%2C1.25%2C0%2C%22%7B%5C%22tz%5C%22%3A480%2C%5C%22dt%5C%22%3Afalse%2C%5C%22rg%5C%22%3A%5C%22%5C%22%2C%5C%22lang%5C%22%3A%5C%22%5C%22%7D%22%2C%22%22%2C%22%22%2C%22%22%5D%7D%7D&mt=1560502675338&jv=2.6.9", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/resaresonline/risk/ubtrms/latest/default/did.min.js?v=20190614", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/reshotelcasonline/R6/js/cas.js?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/js.merge/showhotellist.js?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-3748357-1&cid=1321118040.1560502562&jid=306213622&_gid=605844668.1560502562&gjid=743736814&_v=j76&z=409321165", ENDITEM, 
		"Url=https://cpro.baidu.com/cpro/ui/rt.js", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=brovserVersion&val=Chrome&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502690188&jv=2.6.9", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/countryCode/~1.0.0/default/country.online.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.19/default/img/app_scan.png", ENDITEM, 
		"Url=https://dat.gtags.net/imp/dasp3?a=9&ext_args=&vc=1&vt=91&vpc=2&rvt=91&fr=0&vrt=0&ot=4&u=https:%2F%2Fhotels.ctrip.com%2Fhotel%2Fshanghai2%2Fzone28star5%23ctm_ref%3Dhod_hp_sb_lst&sc=1536*864&ch=UTF-8&la=zh-CN&ti="
		"%E4%B8%8A%E6%B5%B7%E4%BA%BA%E6%B0%91%E5%B9%BF%E5%9C%BA%E5%9C%B0%E5%8C%BA%E4%BA%94%E6%98%9F%E7%BA%A7%E9%85%92%E5%BA%97%2C%E4%B8%8A%E6%B5%B7%E9%85%92%E5%BA%97%E9%A2%84%E8%AE%A2%E6%9F%A5%E8%AF%A2%2C%E4%B8%8A%E6%B5%B7%E5%AE%BE%E9%A6%86%E4%BD%8F%E5%AE%BF%E3%80%90%E6%90%BA%E7%A8%8B%E9%85%92%E5%BA%97%E3%80%91&v=3.0.0.9&ru=https:%2F%2Fhotels.ctrip.com%2F&t=1&r=0.918288841937041", ENDITEM, 
		"Url=https://secure.mediav.com/t?logtype=ecom&qzjgono=%7C%7C%7Cc2%7C%7C%7C%7C%7C%7C%7C%7C-&type=3&db=none&qzja=1.552586726.1560502594109.1560502594109.1560502685368.1560502594109.1560502685368.undefined.0.0.2.2&qzjb=1.1560502685367.1.0.1.0&qzjto=1.1.0&jzqh=hotels.ctrip.com&jzqpt="
		"%E4%B8%8A%E6%B5%B7%E4%BA%BA%E6%B0%91%E5%B9%BF%E5%9C%BA%E5%9C%B0%E5%8C%BA%E4%BA%94%E6%98%9F%E7%BA%A7%E9%85%92%E5%BA%97%2C%E4%B8%8A%E6%B5%B7%E9%85%92%E5%BA%97%E9%A2%84%E8%AE%A2%E6%9F%A5%E8%AF%A2%2C%E4%B8%8A%E6%B5%B7%E5%AE%BE%E9%A6%86%E4%BD%8F%E5%AE%BF%E3%80%90%E6%90%BA%E7%A8%8B%E9%85%92%E5%BA%97%E3%80%91&jzqre=https:%2F%2Fhotels.ctrip.com%2F&qzjhn=undefined&qzjpt=goodsdetail&qzjpi=c2&jzqc=_jzqa%3D1.552586726.1560502594.1560502594.1560502685.2&jzqs=m-26049-0&jzqv=3.3.ctrip.17&qzjgoi=c2&jzqrd="
		"01560502685358", ENDITEM, 
		"Url=https://www.googleadservices.com/pagead/conversion_async.js", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_home_search_situation&val=%7B%22pageid%22:%22102002%22%2C%22from%22:%22%E4%B8%8A%E6%B5%B7%22%2C%22checkindate%22:%222019-06-14%22%2C%22checkoutdate%22:%222019-06-17%22%2C%22searchkey%22:%22%22%2C%22others%22:%22%22%2C%22cityId%22:%222%22%2C%22regionid%22:%222%22%2C%22regiontype%22:%221%22%7D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502690604&jv=2.6.9", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/common/un_sidebar.png", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/jmp-1.0.js", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_basic_online&val=%7B%22keywords%22:%22%22%2C%22starttime%22:%222019-06-14%22%2C%22endtime%22:%222019-06-17%22%2C%22star%22:%225%22%2C%22amount%22:%22%22%2C%22zone%22:%2228%22%2C%22sl%22:%22%22%2C%22l%22:%22%22%2C%22s%22:%22%22%2C%22position%22:%22%22%2C%22cityname%22:%22%E4%B8%8A%E6%B5%B7%22%2C%22brand%22:%22%22%2C%22feature%22:%22%22%2C%22type%22:%22%22%2C%22orderby%22:%22ctriprecommend%22%2C%22ordertype%22"
		":%22desc%22%2C%22paytype%22:%22%22%2C%22cityid%22:%222%22%2C%22hotelnum%22:%2211%22%2C%22uid%22:%22%22%2C%22isprepay%22:%220%22%2C%22isconfirm%22:%220%22%2C%22isbookable%22:%220%22%2C%22ispromotion%22:%220%22%2C%22iscoupon%22:%220%22%2C%22ishourroom%22:%220%22%2C%22htllist%22:%22%5B%7B%5C%22hotelid%5C%22:%5C%22427622%5C%22%2C%5C%22amount%5C%22:%5C%22671%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%224889292%5C%22%2C%5C%22amount%5C%22:%5C%221900%5C%22%7D%2C%7B%5C%22hotelid%5C%22"
		":%5C%229585814%5C%22%2C%5C%22amount%5C%22:%5C%223018%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22426315%5C%22%2C%5C%22amount%5C%22:%5C%22898%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22387238%5C%22%2C%5C%22amount%5C%22:%5C%22988%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22375528%5C%22%2C%5C%22amount%5C%22:%5C%22820%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22345020%5C%22%2C%5C%22amount%5C%22:%5C%22796%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22346391%5C%22%2C%5C%22amount%5C%22"
		":%5C%22806%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22346401%5C%22%2C%5C%22amount%5C%22:%5C%221112%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22345827%5C%22%2C%5C%22amount%5C%22:%5C%221832%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22375216%5C%22%2C%5C%22amount%5C%22:%5C%221301%5C%22%7D%5D%22%2C%22spreadhotel%22:%22%22%2C%22pageindex%22:%221%22%2C%22rnum%22:%22%22%2C%22mnum%22:%22%22%2C%22cnum%22:%22%22%2C%22loadtime%22:35680%2C%22regionid%22:%222%22%2C%22regiontype%22:%221%22%2C%22oid%22"
		":%2215605025464173r3pnm1560502690617102002%22%7D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502690680&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel.list&val=UID%3D%26page_id%3D102002%26VERSION%3D1%26From%3D%E5%8C%97%E4%BA%AC%26FromTime%3D2019-06-14%26ToTime%3D2019-06-17%26Star%3D5%26Price%3D-1--1%26PositionType%3Dzone%26PositionId%3D28%26Keyword%3D%26CityId%3D2%26starid%3D5%26starid%3D5&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502690680&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_hotellist&val=pageid%3D102002%3Bhtlist%3D%7B%22htlist%22%3A%5B%7B%22427622%22%3A%22T%22%2C%224889292%22%3A%22T%22%2C%229585814%22%3A%22T%22%2C%22426315%22%3A%22T%22%2C%22387238%22%3A%22T%22%2C%22375528%22%3A%22T%22%2C%22345020%22%3A%22T%22%2C%22346391%22%3A%22T%22%2C%22346401%22%3A%22T%22%2C%22345827%22%3A%22T%22%2C%22375216%22%3A%22T%22%7D%5D%7D%3Brmlist%3A%5B%7B%7D%5D%7D%3B&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt="
		"1560502690680&jv=2.6.9", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/pic/log.png", ENDITEM, 
		"Url=https://eclick.baidu.com/rt.jpg?t=script&rtid=PWTzPjD&stamp=1560502691113&refer=https%3A%2F%2Fhotels.ctrip.com%2F&word=https%3A%2F%2Fhotels.ctrip.com%2Fhotel%2Fshanghai2%2Fzone28star5%23ctm_ref%3Dhod_hp_sb_lst&origin=ctrip.com", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=pcfloatSuccess&val=pcfloatSuccess3&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502691711&jv=2.6.9", ENDITEM, 
		"Url=https://ckmap.mediav.com/m?tid=26049&tck=no_tck", ENDITEM, 
		"Url=https://images4.c-ctrip.com/img3/marketing/2016/01/float_new_year/guoneijiudian_480x194.png", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200e12000000rq8vl650A_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/hotel/1000/643/22AE64E1815B4CEF966DFAABDAF1F762_R_225_168.Jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/fd/hotel/g5/M09/3D/DE/CggYsVb7OqOAKMYIAAHbdrV3KXc126_R_383_235.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/20080y000000m77b9780F_R_383_235.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200t04000000082if1DCF_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/fd/hotel/g5/M09/3D/DE/CggYsVb7OqOAKMYIAAHbdrV3KXc126_R_225_168.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/200p0h0000008v0it4CE1_R_383_235.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/20090e00000071hbaD8DD_R_225_168.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/200a0z000000nnqzd7C57_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/200n0g0000007wtl14F0B_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/20060s000000hw2hjA0C1_R_100_100.jpg", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1066331136/?random=1560502692161&cv=9&fst=1560502692161&num=1&guid=ON&resp=GooglemKTybQhCsO&u_h=864&u_w=1536&u_ah=824&u_aw=1536&u_cd=24&u_his=2&u_tz=480&u_java=false&u_nplug=3&u_nmime=4&sendb=1&data=hrental_id%3Dno%20match%3Bhrental_totalvalue%3D0%3Bhrental_pagetype%3Dofferdetail&frm=0&url=https:%2F%2Fhotels.ctrip.com%2Fhotel%2Fshanghai2%2Fzone28star5&ref=https:%2F%2Fhotels.ctrip.com%2F&tiba="
		"%E4%B8%8A%E6%B5%B7%E4%BA%BA%E6%B0%91%E5%B9%BF%E5%9C%BA%E5%9C%B0%E5%8C%BA%E4%BA%94%E6%98%9F%E7%BA%A7%E9%85%92%E5%BA%97%2C%E4%B8%8A%E6%B5%B7%E9%85%92%E5%BA%97%E9%A2%84%E8%AE%A2%E6%9F%A5%E8%AF%A2%2C%E4%B8%8A%E6%B5%B7%E5%AE%BE%E9%A6%86%E4%BD%8F%E5%AE%BF&async=1&rfmt=3&fmt=4", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/fd/hotelintl/g4/M01/3F/AA/CggYHFbMC5SAc-zMAAGqgR8tsPk861_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/200n0x000000l440g4042_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/20040t000000ieyifF9E0_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/20070w000000kw7yyF721_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/200n0t000000ipnm742B4_R_383_235.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/20060z000000mzw0m7991_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/200611000000qrrc0F642_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/20080b0000005xw8g96E3_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/200h12000000t2flj145F_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/fd/hotel/g1/M07/0D/56/CghzflTcitaAOMI4AA_a6mZqxrE001_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/fd/hotel/g2/M0A/44/F9/CghzgVWU1GmACn9kACKDw4MVyBY958_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/20080w000000kh5haC35D_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/fd/hotel/g6/M08/B1/10/CggYs1bFbuiAEphkAA1ofOKgzK0522_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/200m11000000r81gq6DEE_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/200t0n000000edff9D998_R_100_100.jpg", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/200t14000000x3aa9F8B5_R_100_100.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_hothotels_online&val=%7B%22hothotels%22%3A%5B%7B%22hotelid%22%3A%2218026393%22%2C%22amount%22%3A%223766%22%2C%22pageindex%22%3A%222%22%2C%22mark%22%3A%224.6%22%2C%22arrange%22%3A%222%22%2C%22district%22%3A%22hot%22%2C%22issale%22%3A%22F%22%7D%5D%7D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502717923&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_starrecommend_online&val="
		"%7B%22starrecommend%22%3A%5B%7B%22hotelid%22%3A%22375568%22%2C%22amount%22%3A%22568%22%2C%22pageindex%22%3A%221%22%2C%22mark%22%3A%224.4%22%2C%22arrange%22%3A%221%22%2C%22district%22%3A%22star%22%2C%22issale%22%3A%22F%22%7D%2C%7B%22hotelid%22%3A%22425940%22%2C%22amount%22%3A%22507%22%2C%22pageindex%22%3A%221%22%2C%22mark%22%3A%224.6%22%2C%22arrange%22%3A%222%22%2C%22district%22%3A%22star%22%2C%22issale%22%3A%22F%22%7D%2C%7B%22hotelid%22%3A%22433185%22%2C%22amount%22%3A%22604%22%2C%22pageindex%22%3"
		"A%221%22%2C%22mark%22%3A%224.7%22%2C%22arrange%22%3A%223%22%2C%22district%22%3A%22star%22%2C%22issale%22%3A%22F%22%7D%5D%7D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502717923&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d="
		"mFtbMiwidXNlcmFjdGlvbiJdLFsxMDIwMAMTmDE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMrijI4NTU0NDM0MTYDH6I3NTc4NDIiLCJBO006OTgsMTgxMDEyX2hvZF96bnB4OkI7AxkDGYUyLjYuOQMelTFyZzc0cXUtcHVwbGh0LXpmOTBvdgMzAzMDMwMzAzMDM4ZvbmxpbmUEaYJ7IgduhzoiY2xpY2sDQoV4cGF0aAMKnkhUTUwvQk9EWVtAaWQ9J21haW5ib2R5J10vRk9STQYPimFzcG5ldEZvcm0DDoZESVZbNF0GH4diYXNlX2JkAxsECYIyXQYohnNlYXJjaAQVAyMEEYYyXS9ETFsEAoFEBjWMSl96b25lQmFubmVyAzYEJAVBhkpfbG9jYQSBUYZIb2xkZXIDQgMxgS8EMYIyXQZQBBWGLTEzNzc1A0uTUFtAeD0nLTIxNiddW0B5PSc0MAUFgXIDDoI3MwQIgXIDBoQxMi"
		"ddA4FHhHRzIjoHgW-JNzIwNzY1fV1d&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_subsituation&val=pageid%3D102002%3Bsubselect%20%3D%7B%22subselect%22:%20%5B%7B%22postype%22:%20%22%22%7D%2C%7B%22position%22:%20%2228%2C13775%22%7D%2C%7B%22price%22:%20%22%22%7D%2C%7B%22star%22:%20%225%22%7D%2C%7B%22special%22:%20%22%22%20%7D%2C%7B%22brandtype%22:%20%22%22%7D%2C%7B%22brand%22:%20%22%22%7D%5D%7D%EF%BC%9Bothers%3D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502720790&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d="
		"mFtbMiwidXNlcmFjdGlvbiJdLFsxMDIwMAMTmDE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMrijI4NTU0NDM0MTYDH6I3NTc4NDIiLCJBO006OTgsMTgxMDEyX2hvZF96bnB4OkI7AxkDGYUyLjYuOQMelTFyZzc0cXUtcHVwbGh0LXpmOTBvdgMzAzMDMwMzAzMDM4ZvbmxpbmUEaYJ7IgduhzoiY2xpY2sDQoV4cGF0aAMKnkhUTUwvQk9EWVtAaWQ9J21haW5ib2R5J10vRk9STQYPimFzcG5ldEZvcm0DDoZESVZbNF0GH4diYXNlX2JkAxsECYIyXQYohnNlYXJjaAQVAyMEEYcyXS9ETFszAwOCRC8DG4EvBBuCM10GOpFzdGFyLTQnXVtAeD0nLTE2MgQHhnk9JzQ4MgQNgXIDC4I1NQQQgXIDB4QyMyddA4EvhHRzIjoHgVeJNzIyMDk2fV1d&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_subsituation&val=pageid%3D102002%3Bsubselect%20%3D%7B%22subselect%22:%20%5B%7B%22postype%22:%20%22%22%7D%2C%7B%22position%22:%20%2228%2C13775%22%7D%2C%7B%22price%22:%20%22%22%7D%2C%7B%22star%22:%20%225%2C4%22%7D%2C%7B%22special%22:%20%22%22%20%7D%2C%7B%22brandtype%22:%20%22%22%7D%2C%7B%22brand%22:%20%22%22%7D%5D%7D%EF%BC%9Bothers%3D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502722111&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d="
		"mFtbMiwidXNlcmFjdGlvbiJdLFsxMDIwMAMTmDE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMrijI4NTU0NDM0MTYDH6I3NTc4NDIiLCJBO006OTgsMTgxMDEyX2hvZF96bnB4OkI7AxkDGYUyLjYuOQMelTFyZzc0cXUtcHVwbGh0LXpmOTBvdgMzAzMDMwMzAzMDM4ZvbmxpbmUEaYJ7IgduhzoiY2xpY2sDQoV4cGF0aAMKnkhUTUwvQk9EWVtAaWQ9J21haW5ib2R5J10vRk9STQYPimFzcG5ldEZvcm0DDoZESVZbNF0GH4diYXNlX2JkAxsECYIyXQYohnNlYXJjaAQVAyMEEYcyXS9ETFszAwOCRC8EGgQFAxqCM10GOZlwcmljZS12MzAwdjQ1MCddW0B4PSctMjI1BAeGeT0nNTEyBA2BcgMLgjEzBBCBcgMHhDE0J10DgTaEdHMiOgeBXok3MjI2NTh9XV0~&jv=1.0.0", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/hotel/795000/794773/ea6a19ec0b024ce1a00cd9f69bf71b31_R_200_200.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_subsituation&val=pageid%3D102002%3Bsubselect%20%3D%7B%22subselect%22:%20%5B%7B%22postype%22:%20%22%22%7D%2C%7B%22position%22:%20%2228%2C13775%22%7D%2C%7B%22price%22:%20%22v300v450%22%7D%2C%7B%22star%22:%20%225%2C4%22%7D%2C%7B%22special%22:%20%22%22%20%7D%2C%7B%22brandtype%22:%20%22%22%7D%2C%7B%22brand%22:%20%22%22%7D%5D%7D%EF%BC%9Bothers%3D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502722667&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_hothotels_online&val=%7B%22hothotels%22%3A%5B%7B%22hotelid%22%3A%228056609%22%2C%22amount%22%3A%223189%22%2C%22pageindex%22%3A%223%22%2C%22mark%22%3A%224.8%22%2C%22arrange%22%3A%223%22%2C%22district%22%3A%22hot%22%2C%22issale%22%3A%22F%22%7D%5D%7D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502722917&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d="
		"mFtbMiwidXNlcmFjdGlvbiJdLFsxMDIwMAMTmDE1NjA1MDI1NDY0MTcuM3IzcG5tIiwxLAMrijI4NTU0NDM0MTYDH6I3NTc4NDIiLCJBO006OTgsMTgxMDEyX2hvZF96bnB4OkI7AxkDGYUyLjYuOQMelTFyZzc0cXUtcHVwbGh0LXpmOTBvdgMzAzMDMwMzAzMDM4ZvbmxpbmUEaYJ7IgduhzoiY2xpY2sDQoV4cGF0aAMKnkhUTUwvQk9EWVtAaWQ9J21haW5ib2R5J10vRk9STQYPimFzcG5ldEZvcm0DDoZESVZbNF0GH4diYXNlX2JkAxsECYIyXQYohnNlYXJjaAQVAyMEEYkyXS9ETC9ERC8DG4EvBBuCM10GOppob3QtYnJlYWtmYXN0LTYnXVtAeD0nLTIyMQQHhXk9JzMwBQyBcgMKgTMFDoFyAwWEMTcnXQOBNoR0cyI6B4FeiTcyNjY0N31dXQ~~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_subsituation&val=pageid%3D102002%3Bsubselect%20%3D%7B%22subselect%22:%20%5B%7B%22postype%22:%20%22%22%7D%2C%7B%22position%22:%20%2228%2C13775%22%7D%2C%7B%22price%22:%20%22v300v450%22%7D%2C%7B%22star%22:%20%225%2C4%22%7D%2C%7B%22special%22:%20%22%22%20%7D%2C%7B%22brandtype%22:%20%22%22%7D%2C%7B%22brand%22:%20%22%22%7D%5D%7D%EF%BC%9Bothers%3D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502726663&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_hothotels_online&val=%7B%22hothotels%22%3A%5B%7B%22hotelid%22%3A%22372187%22%2C%22amount%22%3A%221218%22%2C%22pageindex%22%3A%224%22%2C%22mark%22%3A%224.7%22%2C%22arrange%22%3A%224%22%2C%22district%22%3A%22hot%22%2C%22issale%22%3A%22F%22%7D%5D%7D&pv=1560502546417.3r3pnm.1.2&duid=&env=online&v=6&mt=1560502727919&jv=2.6.9", ENDITEM, 
		"Url=https://dimg10.c-ctrip.com/images/20040t000000ieyifF9E0_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200k12000000sm1exC558_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200k0a0000004gytr2702_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/20010m000000dxvw38DAF_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200a10000000pc6ue1E73_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/fd/hotel/g4/M09/74/8D/CggYHFbOtEGAFdnjAArO2snCi9Q048_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200w0w000000kwc8b8437_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/200s0t000000igl407959_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200u0r000000gq5mcCFC1_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200r070000002ds6323E4_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200e0s000000hpfxiC8D7_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg13.c-ctrip.com/images/200o0o000000ekzx79E0B_R_200_200.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=g&d="
		"%7B%22c%22%3A%5B102002%2C%221560502546417.3r3pnm%22%2C1%2C3%2C%222855443416156757842%22%2C%22A%3BM%3A98%2C181012_hod_znpx%3AB%3B%22%2C%22%22%2C%222.6.9%22%2C%221rg74qu-puplht-zf90ov%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%5D%2C%22d%22%3A%7B%22uinfo%22%3A%5B13%2C102002%2C2%2C%22https%3A%2F%2Fhotels.ctrip.com%2Fhotel%2Fshanghai2%2Fzone28star5%23ctm_ref%3Dhod_hp_sb_lst%22%2C1536%2C864%2C%22cl%3D740%2Cckl%3D15%22%2C%22zh-cn%22%2C%22%22%2C%22%22%2C%22https%3A%2F%2Fhotels.ctrip.co"
		"m%2F%22%2C%22A%3BM%3A98%2C181012_hod_znpx%3AB%3B%22%2C0%2C0%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%2C1.25%2C0%2C%22%7B%5C%22tz%5C%22%3A480%2C%5C%22dt%5C%22%3Afalse%2C%5C%22rg%5C%22%3A%5C%22%5C%22%2C%5C%22lang%5C%22%3A%5C%22%5C%22%7D%22%2C%22%22%2C%22%22%2C%22%22%5D%7D%7D&mt=1560502729327&jv=2.6.9", ENDITEM, 
		"Url=https://m.ctrip.com/restapi/soa2/12378/json/getGeneralConfigData?key=Holiday&callback=cQuery.jsonpCalendarFn", ENDITEM, 
		"Url=https://dimg12.c-ctrip.com/images/200514000000wedr9FCC5_R_200_200.jpg", ENDITEM, 
		"Url=https://dimg11.c-ctrip.com/images/200b0r000000h881l2A7B_R_200_200.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_basic_online&val=%7B%22keywords%22:%22%22%2C%22starttime%22:%222019-06-14%22%2C%22endtime%22:%222019-06-17%22%2C%22star%22:%225%2C4%22%2C%22amount%22:%22v300v450%22%2C%22zone%22:%2228%2C13775%22%2C%22sl%22:%22%22%2C%22l%22:%220%22%2C%22s%22:%22%22%2C%22position%22:%220%22%2C%22cityname%22:%22%E4%B8%8A%E6%B5%B7%22%2C%22brand%22:%22%22%2C%22feature%22:%226%22%2C%22type%22:%22%22%2C%22orderby%22"
		":%22ctriprecommend%22%2C%22ordertype%22:%22desc%22%2C%22paytype%22:%22%22%2C%22cityid%22:%222%22%2C%22hotelnum%22:%2215%22%2C%22uid%22:%22%22%2C%22isprepay%22:%220%22%2C%22isconfirm%22:%220%22%2C%22isbookable%22:%220%22%2C%22ispromotion%22:%220%22%2C%22iscoupon%22:%220%22%2C%22ishourroom%22:%220%22%2C%22htllist%22:%22%5B%7B%5C%22hotelid%5C%22:%5C%221073814%5C%22%2C%5C%22amount%5C%22:%5C%22367%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%226874402%5C%22%2C%5C%22amount%5C%22"
		":%5C%22327%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%221458323%5C%22%2C%5C%22amount%5C%22:%5C%22389%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%221763033%5C%22%2C%5C%22amount%5C%22:%5C%22445%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%226223246%5C%22%2C%5C%22amount%5C%22:%5C%22444%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%224507728%5C%22%2C%5C%22amount%5C%22:%5C%22442%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%224716444%5C%22%2C%5C%22amount%5C%22:%5C%22358%5C%22%7D%2C%7B%5C%22hotelid%5C%22"
		":%5C%226650732%5C%22%2C%5C%22amount%5C%22:%5C%22388%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%221745304%5C%22%2C%5C%22amount%5C%22:%5C%22303%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%224535637%5C%22%2C%5C%22amount%5C%22:%5C%22371%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%2217276123%5C%22%2C%5C%22amount%5C%22:%5C%22313%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22659659%5C%22%2C%5C%22amount%5C%22:%5C%22302%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%22428087%5C%22%2C%5C%22amount%5C%22"
		":%5C%22446%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%228057385%5C%22%2C%5C%22amount%5C%22:%5C%22360%5C%22%7D%2C%7B%5C%22hotelid%5C%22:%5C%225905837%5C%22%2C%5C%22amount%5C%22:%5C%22403%5C%22%7D%5D%22%2C%22spreadhotel%22:%22%22%2C%22pageindex%22:%221%22%2C%22rnum%22:%22%22%2C%22mnum%22:%22%22%2C%22cnum%22:%22%22%2C%22loadtime%22:2704%2C%22starrecommend%22:%22%22%2C%22regionid%22:%222%22%2C%22regiontype%22:%221%22%2C%22oid%22:%2215605025464173r3pnm1560502690617102002%22%7D&pv=1560502546417.3r3pnm.1.3&"
		"duid=&env=online&v=6&mt=1560502747937&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_rollingscreen_map&val=pageid%3D102002%3Bhotellist%3D%221073814%22%3Bclicktime%3D2019-06-14%2016%3A58%3A50%3Bothers%3D&pv=1560502546417.3r3pnm.1.3&duid=&env=online&v=6&mt=1560502747937&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_hotellist&val="
		"pageid%3D102002%3Bhtlist%3D%7B%22htlist%22%3A%5B%221073814%22%3A%22T%22%2C%226874402%22%3A%22T%22%2C%221458323%22%3A%22T%22%2C%221763033%22%3A%22T%22%2C%226223246%22%3A%22T%22%2C%224507728%22%3A%22T%22%2C%224716444%22%3A%22T%22%2C%226650732%22%3A%22T%22%2C%221745304%22%3A%22T%22%2C%224535637%22%3A%22T%22%2C%2217276123%22%3A%22T%22%2C%22659659%22%3A%22T%22%2C%22428087%22%3A%22T%22%2C%228057385%22%3A%22T%22%2C%225905837%22%3A%22T%22%7D%5D%7D%3B%22rmlist%22%3A%5B%7B%7D%5D%3B&pv="
		"1560502546417.3r3pnm.1.3&duid=&env=online&v=6&mt=1560502747936&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_rollingscreen_map&val=pageid%3D102002%3Bhotellist%3D%221073814%22%3Bclicktime%3D2019-06-14%2016%3A58%3A53%3Bothers%3D&pv=1560502546417.3r3pnm.1.3&duid=&env=online&v=6&mt=1560502747937&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel.list&val="
		"%7B%22starid%22%3A%225%2C4%22%2C%22__VIEWSTATEGENERATOR%22%3A%22DB1FBB6D%22%2C%22cityName%22%3A%22%25E4%25B8%258A%25E6%25B5%25B7%22%2C%22StartTime%22%3A%222019-06-14%22%2C%22DepTime%22%3A%222019-06-17%22%2C%22RoomGuestCount%22%3A%221%2C2%2C0%22%2C%22txtkeyword%22%3A%22%22%2C%22Resource%22%3A%22%22%2C%22Room%22%3A%22%22%2C%22Paymentterm%22%3A%22%22%2C%22BRev%22%3A%22%22%2C%22Minstate%22%3A%22%22%2C%22PromoteType%22%3A%22%22%2C%22PromoteDate%22%3A%22%22%2C%22operationtype%22%3A%22NEWHOTELORDER%22%2C"
		"%22PromoteStartDate%22%3A%22%22%2C%22PromoteEndDate%22%3A%22%22%2C%22OrderID%22%3A%22%22%2C%22RoomNum%22%3A%22%22%2C%22IsOnlyAirHotel%22%3A%22F%22%2C%22cityId%22%3A%222%22%2C%22cityPY%22%3A%22shanghai%22%2C%22cityCode%22%3A%22021%22%2C%22cityLat%22%3A%2231.2363508011%22%2C%22cityLng%22%3A%22121.4802384079%22%2C%22positionArea%22%3A%22Zone%22%2C%22positionId%22%3A%2228%22%2C%22hotelposition%22%3A%22%22%2C%22keyword%22%3A%22%22%2C%22hotelId%22%3A%22%22%2C%22htlPageView%22%3A%220%22%2C%22hotelType%22"
		"%3A%22F%22%2C%22hasPKGHotel%22%3A%22F%22%2C%22requestTravelMoney%22%3A%22F%22%2C%22isusergiftcard%22%3A%22F%22%2C%22useFG%22%3A%22F%22%2C%22HotelEquipment%22%3A%22%22%2C%22priceRange%22%3A%22-2%22%2C%22hotelBrandId%22%3A%22%22%2C%22promotion%22%3A%22F%22%2C%22prepay%22%3A%22F%22%2C%22IsCanReserve%22%3A%22F%22%2C%22OrderBy%22%3A%2299%22%2C%22OrderType%22%3A%22%22%2C%22k1%22%3A%22%22%2C%22k2%22%3A%22%22%2C%22CorpPayType%22%3A%22%22%2C%22viewType%22%3A%22%22%2C%22checkIn%22%3A%222019-06-14%22%2C%22ch"
		"eckOut%22%3A%222019-06-17%22%2C%22DealSale%22%3A%22%22%2C%22ulogin%22%3A%22%22%2C%22hidTestLat%22%3A%220%257C0%22%2C%22AllHotelIds%22%3A%22427622%252C4889292%252C9585814%252C426315%252C387238%252C375528%252C345020%252C346391%252C346401%252C345827%252C375216%22%2C%22psid%22%3A%22%22%2C%22isfromlist%22%3A%22T%22%2C%22ubt_price_key%22%3A%22htl_search_result_promotion%22%2C%22showwindow%22%3A%22%22%2C%22defaultcoupon%22%3A%22%22%2C%22isHuaZhu%22%3A%22False%22%2C%22hotelPriceLow%22%3A%22%22%2C%22unBook"
		"HotelTraceCode%22%3A%22%22%2C%22showTipFlg%22%3A%22%22%2C%22traceAdContextId%22%3A%22%22%2C%22allianceid%22%3A%220%22%2C%22sid%22%3A%220%22%2C%22pyramidHotels%22%3A%22%22%2C%22hotelIds%22%3A%22427622_1_1%2C4889292_2_1%2C9585814_3_1%2C426315_4_1%2C387238_5_1%2C375528_6_1%2C345020_7_1%2C346391_8_1%2C346401_9_1%2C345827_10_1%2C375216_11_1%22%2C%22markType%22%3A0%2C%22type%22%3A%22%22%2C%22brand%22%3A%22%22%2C%22group%22%3A%22%22%2C%22feature%22%3A%22%22%2C%22equip%22%3A%22%22%2C%22bed%22%3A%22%22%2C%"
		"22other%22%3A%22%22%2C%22a%22%3A%220%22%2C%22keywordLat%22%3A%22%22%2C%22keywordLon%22%3A%22%22%2C%22contrast%22%3A%220%22%2C%22PaymentType%22%3A%22%22%2C%22CtripService%22%3A%22%22%2C%22promotionf%22%3A%22%22%2C%22allpoint%22%3A%22%22%2C%22zone%22%3A%2228%2C13775%22%2C%22sl%22%3A%22%22%2C%22l%22%3A%22%22%2C%22s%22%3A%22%22%2C%22location%22%3A%22%22%2C%22attachDistance%22%3A0%2C%22contyped%22%3A0%2C%22productcode%22%3A%22%22%2C%22star%22%3A%225%2C4%22%2C%22price%22%3A%22v300v450%22%2C%22breakfast%"
		"22%3A%226%22%2C%22page%22%3A1%7D&pv=1560502546417.3r3pnm.1.3&duid=&env=online&v=6&mt=1560502747939&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=hotel_inland_list_hothotels_online&val=%7B%22hothotels%22%3A%5B%7B%22hotelid%22%3A%22433185%22%2C%22amount%22%3A%22604%22%2C%22pageindex%22%3A%221%22%2C%22mark%22%3A%224.7%22%2C%22arrange%22%3A%221%22%2C%22district%22%3A%22hot%22%2C%22issale%22%3A%22F%22%7D%5D%7D&pv=1560502546417.3r3pnm.1.3&duid=&env=online&v=6&mt=1560502749834&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=g&d="
		"%7B%22c%22%3A%5B102002%2C%221560502546417.3r3pnm%22%2C1%2C3%2C%222855443416156757842%22%2C%22A%3BM%3A98%2C181012_hod_znpx%3AB%3B%22%2C%22%22%2C%222.6.9%22%2C%221rg74qu-puplht-zf90ov%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%5D%2C%22d%22%3A%7B%22ps%22%3A%5B6%2C1560502631902%2C0%2C1560502654125%2C1560502654125%2C0%2C1560502631904%2C1560502631904%2C1560502631904%2C1560502631912%2C1560502653145%2C1560502653146%2C1560502654105%2C1560502654114%2C1560502654184%2C1560502662620%2C15605"
		"02676394%2C1560502676399%2C1560502749139%2C1560502749139%2C1560502749142%2C0%2C0%5D%7D%7D&mt=1560502749239&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=102002&key=htl_search_result_rollingscreen_map&val=pageid%3D102002%3Bhotellist%3D%221073814%22%3Bclicktime%3D2019-06-14%2016%3A59%3A09%3Bothers%3D&pv=1560502546417.3r3pnm.1.3&duid=&env=online&v=6&mt=1560502749942&jv=2.6.9", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.1; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=accounts.ctrip.com");

	web_add_cookie("ASP.NET_SessionId=ik0nw40fgkqncu2gbygdp1bw; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_ga=GA1.2.1321118040.1560502562; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_gid=GA1.2.605844668.1560502562; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_bfi=p1%3D102001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=accounts.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560502594.1560502594.1%234%7C%7C%7C%7C%7C%23; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_jzqco=%7C%7C%7C%7C%7C1.552586726.1560502594109.1560502594109.1560502594109.1560502594109.1560502594109.0.0.0.1.1; DOMAIN=accounts.ctrip.com");

	web_add_cookie("HotelCityID=2split%E5%8C%97%E4%BA%ACsplitShanghaisplit2019-06-14split2019-06-17split5; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_abtest_userid=6d4c630f-728e-42b1-96dc-789c87315a14; DOMAIN=accounts.ctrip.com");

	web_url("AjaxGetCookie.ashx_2", 
		"URL=https://accounts.ctrip.com/member/ajax/AjaxGetCookie.ashx?jsonp=BuildHTML&r=0.31401257893339474&encoding=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/hotelcommon/icon_facility.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/hotels/searchresult/meeting_ad_big.png?20170725.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		"Url=https://pic.c-ctrip.com/htlpic/hotels/searchresult/un_searchresult.png?170814.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"cookieorigin");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Origin", 
		"https://hotels.ctrip.com");

	web_custom_request("GetFloatUI", 
		"URL=https://m.ctrip.com/restapi/soa2/10994/json/GetFloatUI?timestamp=1560502685382", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("w", 
		"URL=https://cms.gtags.net/w?a=9", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_abtest_userid=6d4c630f-728e-42b1-96dc-789c87315a14; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.2; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_bfs=1.2; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_jzqco=%7C%7C%7C%7C%7C1.552586726.1560502594109.1560502594109.1560502685368.1560502594109.1560502685368.0.0.0.2.2; DOMAIN=hotels.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560502594.1560502685.2%234%7C%7C%7C%7C%7C%23; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_bfi=p1%3D102002%26p2%3D102001%26v1%3D2%26v2%3D1; DOMAIN=hotels.ctrip.com");

	web_add_cookie("OID_ForOnlineHotel=15605025464173r3pnm1560502690617102002; DOMAIN=hotels.ctrip.com");

	web_add_header("Origin", 
		"https://hotels.ctrip.com");

	web_custom_request("AjaxHotelPyramidTrace.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxHotelPyramidTrace.aspx", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=hotelId=0&city=2&zone=28&keyword=&star=5&adposition=0&sequence=0&pageId=102002&traceAdContextId=&rmstoken=fp%3D1rg74qu-puplht-zf90ov%26vid%3D1560502546417.3r3pnm%26pageId%3D102002%26r%3Dstart%26ip%3Dundefined%26rg%3Dundefined%26kpData%3D0_0_0%26kpControl%3D0_0_0-0_0_0%26kpEmp%3D0_0_0_0_0_0_0_0_0_0-0_0_0_0_0_0_0_0_0_0-0_0_0_0_0_0_0_0_0_0%26screen%3D1536x864%26tz%3D%2B8%26blang%3Dzh-CN%26oslang%3Dzh-CN%26ua%3DMozilla%252F5.0%2520(Windows%2520NT%252010.0%253B%2520Win64%253B%2520x64)"
		"%2520AppleWebKit%252F537.36%2520(KHTML%252C%2520like%2520Gecko)%2520Chrome%252F75.0.3770.90%2520Safari%252F537.36%26d%3Dhotels.ctrip.com%26v%3D22&action=3", 
		LAST);

	web_custom_request("AjaxGetTuanHotel.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetTuanHotel.aspx?star=5&city=2&startdate=2019-06-14&enddate=2019-06-17&zone=28&location=0&pageindex=1&district=0&psid=&traceid=2855443416156757842", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_add_cookie("_ga=GA1.2.1321118040.1560502562; DOMAIN=m.ctrip.com");

	web_add_cookie("_gid=GA1.2.605844668.1560502562; DOMAIN=m.ctrip.com");

	web_add_cookie("HotelCityID=2split%E5%8C%97%E4%BA%ACsplitShanghaisplit2019-06-14split2019-06-17split5; DOMAIN=m.ctrip.com");

	web_add_cookie("_abtest_userid=6d4c630f-728e-42b1-96dc-789c87315a14; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.2; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfs=1.2; DOMAIN=m.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=m.ctrip.com");

	web_add_cookie("_jzqco=%7C%7C%7C%7C%7C1.552586726.1560502594109.1560502594109.1560502685368.1560502594109.1560502685368.0.0.0.2.2; DOMAIN=m.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560502594.1560502685.2%234%7C%7C%7C%7C%7C%23; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfi=p1%3D102002%26p2%3D102001%26v1%3D2%26v2%3D1; DOMAIN=m.ctrip.com");

	web_add_header("Origin", 
		"https://hotels.ctrip.com");

	web_add_header("cookieOrigin", 
		"https://hotels.ctrip.com");

	web_custom_request("GetFloatUI_2", 
		"URL=https://m.ctrip.com/restapi/soa2/10994/json/GetFloatUI?timestamp=1560502685382", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"PlatformType\":\"pc\",\"pageParameter\":{\"Refer\":\"hotels.ctrip.com\",\"UA\":\"Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F75.0.3770.90%20Safari%2F537.36\",\"PageID\":102002,\"VID\":\"1560502546417.3r3pnm\"},\"marketParameter\":{\"AID\":0,\"SID\":0},\"terminalParameter\":{\"UserID\":\"\",\"CityID\":0},\"pcAuthCodeParamet\":{\"IsGetAuthCode\":true,\"AppID\":\"\",\"Length\":4}}", 
		LAST);

	web_custom_request("AjaxGetCPTList.ashx", 
		"URL=https://hotels.ctrip.com/Domestic/tool/AjaxGetCPTList.ashx?advpositioncode=HTL_LST_001,HTL_LST_002,HTL_LST_004&city=2&checkin=2019-06-14&checkout=2019-06-17&star=5", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_add_header("Origin", 
		"https://hotels.ctrip.com");

	web_submit_data("AjaxGetGroupProductList.aspx",
		"Action=https://hotels.ctrip.com/Domestic/Tool/AjaxGetGroupProductList.aspx",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5",
		"Snapshot=t73.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=city", "Value={citys}", ENDITEM,
		"Name=hotels", "Value=", ENDITEM,
		"Name=checkin", "Value=2019-06-14", ENDITEM,
		"Name=checkout", "Value=2019-06-17", ENDITEM,
		LAST);

	web_custom_request("AjaxGetCouponData.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetCouponData.aspx?from=list&city=2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("MapIframeDetail.aspx", 
		"URL=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("AjaxGetHotelAddtionalInfo.ashx_2", 
		"URL=https://hotels.ctrip.com/Domestic/tool/AjaxGetHotelAddtionalInfo.ashx?browseData=1&favData=1&FavCount=2&cityId=2&hf=1&viewCount=4&hotelidlist=427622,4889292,9585814,426315,387238,375528,345020,346391,346401,345827,375216,hoteltuan", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		EXTRARES, 
		"Url=https://images4.c-ctrip.com/img3/marketing/2015/12/float_pc_system/fl_open_wrap.png", "Referer=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/css/pc_flaot.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/hotelcommon/ico_common_v1.png?160823.png", "Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/un_searchresult.css?releaseno=2019-06-13-12-01-15", ENDITEM, 
		LAST);

	web_add_cookie("_jzqco=%7C%7C%7C%7C1560502691624%7C1.552586726.1560502594109.1560502594109.1560502685368.1560502594109.1560502685368.undefined.0.0.2.2; DOMAIN=hotels.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=hotels.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=hotels.ctrip.com");

	web_url("AjaxGetCitySuggestion.aspx_2", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetCitySuggestion.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://api.map.baidu.com/getscript?v=3.0&ak=eikVTDrvMvVnPldFlh44DWdUAKpq1xfL&services=&t=20190527152033", "Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://hotels.ctrip.com");

	web_submit_data("AjaxHotelList.aspx", 
		"Action=https://hotels.ctrip.com/Domestic/Tool/AjaxHotelList.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATEGENERATOR", "Value=DB1FBB6D", ENDITEM, 
		"Name=cityName", "Value=%E4%B8%8A%E6%B5%B7", ENDITEM, 
		"Name=StartTime", "Value=2019-06-14", ENDITEM, 
		"Name=DepTime", "Value=2019-06-17", ENDITEM, 
		"Name=RoomGuestCount", "Value=1,2,0", ENDITEM, 
		"Name=txtkeyword", "Value=", ENDITEM, 
		"Name=Resource", "Value=", ENDITEM, 
		"Name=Room", "Value=", ENDITEM, 
		"Name=Paymentterm", "Value=", ENDITEM, 
		"Name=BRev", "Value=", ENDITEM, 
		"Name=Minstate", "Value=", ENDITEM, 
		"Name=PromoteType", "Value=", ENDITEM, 
		"Name=PromoteDate", "Value=", ENDITEM, 
		"Name=operationtype", "Value=NEWHOTELORDER", ENDITEM, 
		"Name=PromoteStartDate", "Value=", ENDITEM, 
		"Name=PromoteEndDate", "Value=", ENDITEM, 
		"Name=OrderID", "Value=", ENDITEM, 
		"Name=RoomNum", "Value=", ENDITEM, 
		"Name=IsOnlyAirHotel", "Value=F", ENDITEM, 
		"Name=cityId", "Value=2", ENDITEM, 
		"Name=cityPY", "Value=shanghai", ENDITEM, 
		"Name=cityCode", "Value=021", ENDITEM, 
		"Name=cityLat", "Value=31.2363508011", ENDITEM, 
		"Name=cityLng", "Value=121.4802384079", ENDITEM, 
		"Name=positionArea", "Value=Zone", ENDITEM, 
		"Name=positionId", "Value=28", ENDITEM, 
		"Name=hotelposition", "Value=", ENDITEM, 
		"Name=keyword", "Value=", ENDITEM, 
		"Name=hotelId", "Value=", ENDITEM, 
		"Name=htlPageView", "Value=0", ENDITEM, 
		"Name=hotelType", "Value=F", ENDITEM, 
		"Name=hasPKGHotel", "Value=F", ENDITEM, 
		"Name=requestTravelMoney", "Value=F", ENDITEM, 
		"Name=isusergiftcard", "Value=F", ENDITEM, 
		"Name=useFG", "Value=F", ENDITEM, 
		"Name=HotelEquipment", "Value=", ENDITEM, 
		"Name=priceRange", "Value=-2", ENDITEM, 
		"Name=hotelBrandId", "Value=", ENDITEM, 
		"Name=promotion", "Value=F", ENDITEM, 
		"Name=prepay", "Value=F", ENDITEM, 
		"Name=IsCanReserve", "Value=F", ENDITEM, 
		"Name=OrderBy", "Value=99", ENDITEM, 
		"Name=OrderType", "Value=", ENDITEM, 
		"Name=k1", "Value=", ENDITEM, 
		"Name=k2", "Value=", ENDITEM, 
		"Name=CorpPayType", "Value=", ENDITEM, 
		"Name=viewType", "Value=", ENDITEM, 
		"Name=checkIn", "Value=2019-06-14", ENDITEM, 
		"Name=checkOut", "Value=2019-06-17", ENDITEM, 
		"Name=DealSale", "Value=", ENDITEM, 
		"Name=ulogin", "Value=", ENDITEM, 
		"Name=hidTestLat", "Value=0%7C0", ENDITEM, 
		"Name=AllHotelIds", "Value=427622%2C4889292%2C9585814%2C426315%2C387238%2C375528%2C345020%2C346391%2C346401%2C345827%2C375216", ENDITEM, 
		"Name=psid", "Value=", ENDITEM, 
		"Name=isfromlist", "Value=T", ENDITEM, 
		"Name=ubt_price_key", "Value=htl_search_result_promotion", ENDITEM, 
		"Name=showwindow", "Value=", ENDITEM, 
		"Name=defaultcoupon", "Value=", ENDITEM, 
		"Name=isHuaZhu", "Value=False", ENDITEM, 
		"Name=hotelPriceLow", "Value=", ENDITEM, 
		"Name=unBookHotelTraceCode", "Value=", ENDITEM, 
		"Name=showTipFlg", "Value=", ENDITEM, 
		"Name=traceAdContextId", "Value=", ENDITEM, 
		"Name=allianceid", "Value=0", ENDITEM, 
		"Name=sid", "Value=0", ENDITEM, 
		"Name=pyramidHotels", "Value=", ENDITEM, 
		"Name=hotelIds", "Value=427622_1_1,4889292_2_1,9585814_3_1,426315_4_1,387238_5_1,375528_6_1,345020_7_1,346391_8_1,346401_9_1,345827_10_1,375216_11_1", ENDITEM, 
		"Name=markType", "Value=0", ENDITEM, 
		"Name=type", "Value=", ENDITEM, 
		"Name=brand", "Value=", ENDITEM, 
		"Name=group", "Value=", ENDITEM, 
		"Name=feature", "Value=", ENDITEM, 
		"Name=equip", "Value=", ENDITEM, 
		"Name=bed", "Value=", ENDITEM, 
		"Name=breakfast", "Value=", ENDITEM, 
		"Name=other", "Value=", ENDITEM, 
		"Name=a", "Value=0", ENDITEM, 
		"Name=keywordLat", "Value=", ENDITEM, 
		"Name=keywordLon", "Value=", ENDITEM, 
		"Name=contrast", "Value=0", ENDITEM, 
		"Name=PaymentType", "Value=", ENDITEM, 
		"Name=CtripService", "Value=", ENDITEM, 
		"Name=promotionf", "Value=", ENDITEM, 
		"Name=allpoint", "Value=", ENDITEM, 
		"Name=zone", "Value=28,13775", ENDITEM, 
		"Name=sl", "Value=", ENDITEM, 
		"Name=l", "Value=", ENDITEM, 
		"Name=s", "Value=", ENDITEM, 
		"Name=location", "Value=", ENDITEM, 
		"Name=attachDistance", "Value=0", ENDITEM, 
		"Name=contyped", "Value=0", ENDITEM, 
		"Name=productcode", "Value=", ENDITEM, 
		"Name=star", "Value=5,4", ENDITEM, 
		"Name=price", "Value=v300v450", ENDITEM, 
		"Name=page", "Value=1", ENDITEM, 
		EXTRARES, 
		"Url=https://api.map.baidu.com/images/blank.gif?product=jsapi&sub_product=jsapi&v=3.0&sub_product_v=3.0&t=213518&code=5000&da_src=5000&device_pixel_ratio=1.25&platform=Win32", "Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2", ENDITEM, 
		"Url=https://api.map.baidu.com/?qt=verify&ak=eikVTDrvMvVnPldFlh44DWdUAKpq1xfL&callback=BMap._rd._cbk17289", "Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2", ENDITEM, 
		LAST);

	web_submit_data("AjaxHotelList.aspx_2", 
		"Action=https://hotels.ctrip.com/Domestic/Tool/AjaxHotelList.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=__VIEWSTATEGENERATOR", "Value=DB1FBB6D", ENDITEM, 
		"Name=cityName", "Value=%E4%B8%8A%E6%B5%B7", ENDITEM, 
		"Name=StartTime", "Value=2019-06-14", ENDITEM, 
		"Name=DepTime", "Value=2019-06-17", ENDITEM, 
		"Name=RoomGuestCount", "Value=1,2,0", ENDITEM, 
		"Name=txtkeyword", "Value=", ENDITEM, 
		"Name=Resource", "Value=", ENDITEM, 
		"Name=Room", "Value=", ENDITEM, 
		"Name=Paymentterm", "Value=", ENDITEM, 
		"Name=BRev", "Value=", ENDITEM, 
		"Name=Minstate", "Value=", ENDITEM, 
		"Name=PromoteType", "Value=", ENDITEM, 
		"Name=PromoteDate", "Value=", ENDITEM, 
		"Name=operationtype", "Value=NEWHOTELORDER", ENDITEM, 
		"Name=PromoteStartDate", "Value=", ENDITEM, 
		"Name=PromoteEndDate", "Value=", ENDITEM, 
		"Name=OrderID", "Value=", ENDITEM, 
		"Name=RoomNum", "Value=", ENDITEM, 
		"Name=IsOnlyAirHotel", "Value=F", ENDITEM, 
		"Name=cityId", "Value=2", ENDITEM, 
		"Name=cityPY", "Value=shanghai", ENDITEM, 
		"Name=cityCode", "Value=021", ENDITEM, 
		"Name=cityLat", "Value=31.2363508011", ENDITEM, 
		"Name=cityLng", "Value=121.4802384079", ENDITEM, 
		"Name=positionArea", "Value=Zone", ENDITEM, 
		"Name=positionId", "Value=28", ENDITEM, 
		"Name=hotelposition", "Value=", ENDITEM, 
		"Name=keyword", "Value=", ENDITEM, 
		"Name=hotelId", "Value=", ENDITEM, 
		"Name=htlPageView", "Value=0", ENDITEM, 
		"Name=hotelType", "Value=F", ENDITEM, 
		"Name=hasPKGHotel", "Value=F", ENDITEM, 
		"Name=requestTravelMoney", "Value=F", ENDITEM, 
		"Name=isusergiftcard", "Value=F", ENDITEM, 
		"Name=useFG", "Value=F", ENDITEM, 
		"Name=HotelEquipment", "Value=", ENDITEM, 
		"Name=priceRange", "Value=-2", ENDITEM, 
		"Name=hotelBrandId", "Value=", ENDITEM, 
		"Name=promotion", "Value=F", ENDITEM, 
		"Name=prepay", "Value=F", ENDITEM, 
		"Name=IsCanReserve", "Value=F", ENDITEM, 
		"Name=OrderBy", "Value=99", ENDITEM, 
		"Name=OrderType", "Value=", ENDITEM, 
		"Name=k1", "Value=", ENDITEM, 
		"Name=k2", "Value=", ENDITEM, 
		"Name=CorpPayType", "Value=", ENDITEM, 
		"Name=viewType", "Value=", ENDITEM, 
		"Name=checkIn", "Value=2019-06-14", ENDITEM, 
		"Name=checkOut", "Value=2019-06-17", ENDITEM, 
		"Name=DealSale", "Value=", ENDITEM, 
		"Name=ulogin", "Value=", ENDITEM, 
		"Name=hidTestLat", "Value=0%7C0", ENDITEM, 
		"Name=AllHotelIds", "Value=427622%2C4889292%2C9585814%2C426315%2C387238%2C375528%2C345020%2C346391%2C346401%2C345827%2C375216", ENDITEM, 
		"Name=psid", "Value=", ENDITEM, 
		"Name=isfromlist", "Value=T", ENDITEM, 
		"Name=ubt_price_key", "Value=htl_search_result_promotion", ENDITEM, 
		"Name=showwindow", "Value=", ENDITEM, 
		"Name=defaultcoupon", "Value=", ENDITEM, 
		"Name=isHuaZhu", "Value=False", ENDITEM, 
		"Name=hotelPriceLow", "Value=", ENDITEM, 
		"Name=unBookHotelTraceCode", "Value=", ENDITEM, 
		"Name=showTipFlg", "Value=", ENDITEM, 
		"Name=traceAdContextId", "Value=", ENDITEM, 
		"Name=allianceid", "Value=0", ENDITEM, 
		"Name=sid", "Value=0", ENDITEM, 
		"Name=pyramidHotels", "Value=", ENDITEM, 
		"Name=hotelIds", "Value=427622_1_1,4889292_2_1,9585814_3_1,426315_4_1,387238_5_1,375528_6_1,345020_7_1,346391_8_1,346401_9_1,345827_10_1,375216_11_1", ENDITEM, 
		"Name=markType", "Value=0", ENDITEM, 
		"Name=type", "Value=", ENDITEM, 
		"Name=brand", "Value=", ENDITEM, 
		"Name=group", "Value=", ENDITEM, 
		"Name=feature", "Value=", ENDITEM, 
		"Name=equip", "Value=", ENDITEM, 
		"Name=bed", "Value=", ENDITEM, 
		"Name=other", "Value=", ENDITEM, 
		"Name=a", "Value=0", ENDITEM, 
		"Name=keywordLat", "Value=", ENDITEM, 
		"Name=keywordLon", "Value=", ENDITEM, 
		"Name=contrast", "Value=0", ENDITEM, 
		"Name=PaymentType", "Value=", ENDITEM, 
		"Name=CtripService", "Value=", ENDITEM, 
		"Name=promotionf", "Value=", ENDITEM, 
		"Name=allpoint", "Value=", ENDITEM, 
		"Name=zone", "Value=28,13775", ENDITEM, 
		"Name=sl", "Value=", ENDITEM, 
		"Name=l", "Value=", ENDITEM, 
		"Name=s", "Value=", ENDITEM, 
		"Name=location", "Value=", ENDITEM, 
		"Name=attachDistance", "Value=0", ENDITEM, 
		"Name=contyped", "Value=0", ENDITEM, 
		"Name=productcode", "Value=", ENDITEM, 
		"Name=star", "Value=5,4", ENDITEM, 
		"Name=price", "Value=v300v450", ENDITEM, 
		"Name=breakfast", "Value=6", ENDITEM, 
		"Name=page", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("AjaxGetHotKeyword.aspx_2", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetHotKeyword.aspx?cityid=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://api.map.baidu.com/images/openhand.cur", "Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2", ENDITEM, 
		LAST);

	web_add_cookie("_bfa=1.1560502546417.3r3pnm.1.1560502546417.1560502546417.1.3; DOMAIN=hotels.ctrip.com");

	web_add_cookie("_bfs=1.3; DOMAIN=hotels.ctrip.com");

	lr_think_time(7);

	web_custom_request("AjaxGetTuanHotel.aspx_2", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetTuanHotel.aspx?star=5&city=2&startdate=2019-06-14&enddate=2019-06-17&zone=28,13775&location=0&pageindex=1&psid=&traceid=2855443416156757842", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_custom_request("AjaxGetCouponData.aspx_2", 
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxGetCouponData.aspx?from=list&city=2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		LAST);

	web_add_auto_header("Origin", 
		"https://hotels.ctrip.com");

	web_submit_data("AjaxGetGroupProductList.aspx_2",
		"Action=https://hotels.ctrip.com/Domestic/Tool/AjaxGetGroupProductList.aspx",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5",
		"Snapshot=t83.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=city", "Value={citys}", ENDITEM,
		"Name=hotels", "Value=", ENDITEM,
		"Name=checkin", "Value=2019-06-14", ENDITEM,
		"Name=checkout", "Value=2019-06-17", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

/* Added by Async CodeGen.
ID=LongPoll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=412&y=111&z=11&styles=pl&scaler=1&udt=20190613
	https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=413&y=110&z=11&styles=pl&scaler=1&udt=20190613
	https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26411&y=7112&z=17&styles=pl&scaler=1&udt=20190613

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_0_RequestCB
	LongPoll_0_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=412&y=111&z=11&styles=pl&scaler=1&udt=20190613", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = LongPoll_0
URLs: 
	https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=412&y=111&z=11&styles=pl&scaler=1&udt=20190613
	https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=413&y=110&z=11&styles=pl&scaler=1&udt=20190613
	https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26411&y=7112&z=17&styles=pl&scaler=1&udt=20190613
 */
	web_custom_request("AjaxHotelPyramidTrace.aspx_2",
		"URL=https://hotels.ctrip.com/Domestic/Tool/AjaxHotelPyramidTrace.aspx",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://hotels.ctrip.com/hotel/shanghai2/zone28star5",
		"Snapshot=t84.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"Body=hotelId=0&city={citys}&zone=28%2C13775&keyword=&star=5%2C4&adposition=0&sequence=0&pageId=102002&traceAdContextId=v2_H4sIAAAAAAAAAF3OvVHEMBAF4IOIGgiZixh2Zv93dSGNeGxJxPRDBVcAEYXQxBVxGpsAO1Lw6e17Tz%2B33%2Bs3PH89kqR4TvWzTuNNLkyTXhhIIgz0jZCLyerkVBCd907OqJuzkYoc8sqSvHkJIxbcuSuVrV5NzCX2aQkhX9ndMORQLpZO2%2FEY%2BTFkv03H5D%2Fm8FF%2BjBfC1dksjcz%2B%2B8vp9SzZtUklEJUFtLHB0qPDUrm1cTDLB%2BPD5YxYkufOkHMf%2F2h2yCoK3rrMrZXgWt9Pd5iu%2B2N3AQAA&rmstoken=fp%3D1rg74qu-puplht-zf90ov%26vid%3D1560502546417.3r3pnm%26pageId%3D102002%26r%3Dstart%26ip%3Dundefined%26rg%3Dundefined%26kpData%3D0_0_0%26kpControl%3D0_0_0-0_0_0%26kpEmp%3D0_0_0_0_0_0_0_0_0_0-0_0_0_0_0_0_0_0_0_0-0_0_0_0_0_0_0_0_0_0%26screen%3D1536x864%26tz%3D%2B8%26blang%3Dzh-CN%26oslang%3Dzh-CN%26ua%3DMozilla%252F5.0%2520(Windows%2520NT%252010.0%253B%2520Win64%253B%2520x64)%2520AppleWebKit%252F537.36%2520(KHTML%252C%2520like%2520Gecko)%2520Chrome%252F75.0.3770.90%2520Safari%252F537.36%26d%3Dhotels.ctrip.com%26v%3D22&action=3",
		EXTRARES,
		"Url=https://gss0.bdstatic.com/8bo_dTSlQ1gBo1vgoIiO_jowehsv/tile/?qt=vtile&x=413&y=111&z=11&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=412&y=111&z=11&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRcgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=412&y=110&z=11&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://pic.c-ctrip.com/hotels121118/un_map_spot3.png","Referer=https://webresource.c-ctrip.com/ResHotelOnline/R2/search/css/map_iframe.css?releaseno=2019-06-13-12-01-15",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlQ1gBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26412&y=7112&z=17&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlR1gBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26413&y=7112&z=17&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlR1gBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26412&y=7113&z=17&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRsgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=826&y=222&z=12&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/getmodules?v=3.0&mod=map_se12k1,oppc_xno3ew,style_mqdswt,tile_arfjro,navictrl_euxavb,control_r2lwlu","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRcgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=826&y=221&z=12&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRMgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=825&y=221&z=12&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRcgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=825&y=222&z=12&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/copyright_logo.png","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlQ1gBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26411&y=7113&z=17&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://gss0.bdstatic.com/8bo_dTSlRMgBo1vgoIiO_jowehsv/tile/?qt=vtile&x=26413&y=7113&z=17&styles=pl&scaler=1&udt=20190613","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/mapctrls.png","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/blank.gif","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/panorama/close.png","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/mapctrls1d3.gif","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/panorama/indoor_exit.png","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/mapctrls2d0.png","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/getmodules?v=3.0&mod=copyrightctrl_fmarj0","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/?qt=cen&b=13521782.25641779%2C3627215.3496245313%3B13546102.25641779%2C3644239.3516262667&l=12&ie=utf-8&oue=1&fromproduct=jsapi&callback=BMap._rd._cbk8241&ak=eikVTDrvMvVnPldFlh44DWdUAKpq1xfL","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/blank.gif?product=jsapi&sub_product=jsapi&v=3.0&sub_product_v=3.0&t=66206820&code=5054&da_src=5054&pic=4","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		"Url=https://api.map.baidu.com/images/blank.gif?product=jsapi&sub_product=jsapi&v=3.0&sub_product_v=3.0&t=10324998&code=5030&da_src=5030&load_script_time=14167&load_tiles_time=16783&map_width=380&map_height=266&map_size=101080","Referer=https://hotels.ctrip.com/Domestic/MapIframeDetail.aspx?city=2&province=2",ENDITEM,
		LAST);

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,mimojjlkmoijpicakmndhoigimigcmbb,hnimpnehoodheedghdeeijklkeaacbdc,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,ojjgnpkioondelmggbekfhllhdaimnho,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,ehgidpndbllacpjalkiimkbadgjfnnmc,copjbmjbojbakpaedmpkhmiplmmehfck,gkmgaooipdjhmangpemjhigmamcehddo");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-75.0.3770.90");

	lr_think_time(86);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=9:2668991834&cup2hreq=53a2fbe6bcfb0a654039410c5dbf933d3d4996a32df76c67b009cc6f9fa9e4d3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"DIMA\",\"cohortname\":\"Auto\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{5cbc5794-9424-44b7-b5fc-918852d7aa15}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"DIMA\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50... M99]\",\"cohortname\":\"Chrome [M50... M99]\""
		",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c63201e9449bdaa2f8e4bd17035a9cc4a89b5cb2ad009d9f3df393d921a106d0\"}]},\"ping\":{\"ping_freshness\":\"{95fd9e0c-493c-4978-b924-fc1df65a840d}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"32.0.0.207\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"DIMA\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"}]},\"ping\":{\"ping_freshness\":\""
		"{325b5770-c539-4227-8a08-7c1252323151}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"DIMA\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{ade4f8b5-f574-4443-aa90-60b71d095220}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"4.10.1440.18\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"DIMA\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"}]},\"ping\":{\"ping_freshness\":\"{bbc939f2-3c7f-441a-8dc5-f0715c668fe2}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"9.1\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"DIMA\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.024d2bee1381a1a7cabb7f866d75325d36498659dff57d14d04092c3d8f09c73\"}]},\"ping\":{\""
		"ping_freshness\":\"{5c5c9d00-f1ca-4696-9d20-bae89027343e}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"5212\"},{\"appid\":\"ojjgnpkioondelmggbekfhllhdaimnho\",\"brand\":\"DIMA\",\"cohort\":\"1:0:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54cb40f0a2d6693f84282c6820c68ca0ffaefd2229df897b58180ff009ffdd56\"}]},\"ping\":{\"ping_freshness\":\"{9a1c7fc0-e514-420c-82ba-9ca3e71b7f16}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"1151\"},"
		"{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"DIMA\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{4fcea294-3482-44e2-81e5-670e1ea35f77}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"DIMA\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd49e95c952bdb265a80513767311a5e069ac9dbf2ed4b480b96513b0ccbe086\"}]},\"ping\":{\""
		"ping_freshness\":\"{1410e9b7-4130-4cdb-8328-73937ceba544}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"36\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"DIMA\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{16735e35-19de-4346-a0cb-fce9dbef585f}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"7\"},{\""
		"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"DIMA\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.65717b0144bfb0bd193f8ce31bf0dd7c95ff6d5844f2bc0c742974c1ccf889ae\"}]},\"ping\":{\"ping_freshness\":\"{25882b11-c22b-4288-ac1d-29fc7a01d763}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"1.0.5.0\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"DIMA\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{d6371ad6-9068-44f9-9faa-8848a1f15479}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"DIMA\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\""
		"ping_freshness\":\"{f258823d-3336-4913-83f3-7bee8d4b7cf8}\",\"rd\":4547},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"DIMA\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable Location B\",\"cohortname\":\"Stable Location B\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e5f26bd94a0464a525363079b514b382fdc5a0f59ea39171ca3c194346cb03db\"}]},\"ping\":{\"ping_freshness\":\"{e7d386c2-3e35-4fe7-8592-09c409168f46}\",\"rd\":4547},\"tag\""
		":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"42.206.200.3\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":7},\"lang\":\"zh-CN\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17134.829\"},\"prodversion\":\"75.0.3770.90\",\"protocol\":\"3.1\",\"requestid\":\"{993d20e3-6eaf-4b2c-bf08-87c2d2833462}\",\"sessionid\":\"{82218225-6d4c-43b0-8188-1eed7fdb74b2}\",\"updater\":{\"autoupdatecheckenabled\":true,\""
		"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.34.11\"},\"updaterversion\":\"75.0.3770.90\"}}", 
		LAST);

	return 0;
	lr_end_transaction("action", LR_AUTO);
	
}