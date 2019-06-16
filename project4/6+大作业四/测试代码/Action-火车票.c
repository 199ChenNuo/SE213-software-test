Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.1; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.1; DOMAIN=webresource.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=webresource.ctrip.com");

	web_add_cookie("_ga=GA1.2.2146416298.1560431876; DOMAIN=webresource.ctrip.com");

	web_add_cookie("_gid=GA1.2.202191401.1560431876; DOMAIN=webresource.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=webresource.ctrip.com");

	web_add_cookie("_bfi=p1%3D108001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=webresource.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=webresource.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=webresource.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=m.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=m.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560431914.1560431914.1%234%7C%7C%7C%7C%7C%23; DOMAIN=m.ctrip.com");

	web_url("SearchTrain.aspx", 
		"URL=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://webresource.c-ctrip.com/code/ubt/_bfa.min.js?v=20195_13.js", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/AdCallProxyV2.aspx?biztype=401&adlist=%5B%7B%27pagecode%27%3A%271%27%2C%27domid%27%3A%27divAppBanner%27%2C%27type%27%3A0%7D%5D&fscreen=0&r=ws_www", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/pcfloat.min.js?v=20160329", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/address-1.0.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/cQuery_110421.js", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/ui2_train.min.js?2019_6_6_11_23_31.js", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/jquery.min.js?2019_6_6_11_23_31.js", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/ol_searchtrain.min.js?2019_6_6_11_23_31.js", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/hotline.min.js?2019_6_6_11_23_31.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/remarketing.js", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/Ajax/DyRequest.aspx?v2=true&biztype=401&pageid=1&callback=G_Ad_DyLoad_1.DyLoad&_rm=0.8401672269225375", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/resaresonline/risk/ubtrms/latest/default/rms.js?v=20190613", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/common/marinRedirect.js?v=20190613", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/qCode.min.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/yUtil.min.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/floating_normal.min.js?20190613", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700514000000x257i9526_850_360_39.png", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/700j0r000000h23js0F05_850_360_39.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=g&d="
		"%7B%22c%22%3A%5B108001%2C%221560431850551.2yojk0%22%2C1%2C1%2C%221584232670712300555%22%2C%22%22%2C%22%22%2C%222.6.9%22%2C%221rg74qu-1dc6k9j-zf90ov%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%5D%2C%22d%22%3A%7B%22uinfo%22%3A%5B13%2C0%2C0%2C%22https%3A%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearchTrain.aspx%23%23%23%22%2C1536%2C864%2C%22cl%3D114%2Cckl%3D3%22%2C%22zh-cn%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C1%2C0%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C"
		"%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%2C1.25%2C1%2C%22%7B%5C%22tz%5C%22%3A480%2C%5C%22dt%5C%22%3Afalse%2C%5C%22rg%5C%22%3A%5C%22%5C%22%2C%5C%22lang%5C%22%3A%5C%22%5C%22%7D%22%2C%22%22%2C%22%22%2C%22%22%5D%7D%7D&mt=1560431853579&jv=2.6.9", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/hotel/46000/45910/F92B0C7D-1B94-45F0-A28E-EF44A0D7FA0D_R_280_170.jpg", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/station_gb2312.js?2019_6_6_11_23_31", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/validate-1.1.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/calendar-6.0.js", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/css/pc_flaot.css", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/notice-1.0.js", ENDITEM, 
		"Url=https://pic.c-ctrip.com/cquery/pic_fir.png", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/200p15000000xn9ze04DD_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/hotel/49000/48917/734b299e6691498a8863e84cb55f0ee9_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/200v0q000000gkpal0CC5_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/hotel/795000/794773/ea6a19ec0b024ce1a00cd9f69bf71b31_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/20090b0000005s3fj7DEB_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/hotel/436000/435852/14d370f94b8145f4aafc993a39329e88_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/200l0q000000g9cyo7925_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/20010g00000087szgBCF9_R_280_170.jpg", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/__nts.js?v=201941516259", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/thirdPart.js?v=201941516259", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/200t14000000w60ur8D91_R_280_170.jpg", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/resaresonline/risk/ubtrms/d.min.1165b232.js", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/200i0900000046wmu180C_R_280_170.jpg", ENDITEM, 
		"Url=https://dimg04.c-ctrip.com/images/200o0l000000cstuo23AF_R_280_170.jpg", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=108001&key=sumadpv&val=UserId%3D1560431850551.2yojk0%26PageId%3D108001%26PositionIdVSAdId%3D100118%3A578488-100119%3A547757%26SiteID%3D%26SiteType%3D&pv=1560431850551.2yojk0.1.1&duid=&env=online&v=6&mt=1560431878728&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=108001&key=pcadpv&val=UserId%3D1560431850551.2yojk0%26PageId%3D108001%26PositionId%3D100118%26AdId%3D578488%26src%3Dhttps%3A%2F%2Fdimg04.c-ctrip.com%2Fimages%2F700514000000x257i9526_850_360_39.png%26SiteID%3D%26SiteType%3D&pv=1560431850551.2yojk0.1.1&duid=&env=online&v=6&mt=1560431878729&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=108001&key=brovserVersion&val=Chrome&pv=1560431850551.2yojk0.1.1&duid=&env=online&v=6&mt=1560431878728&jv=2.6.9", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/mba_ctrip_trains.js", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=108001&key=pcadpv&val=UserId%3D1560431850551.2yojk0%26PageId%3D108001%26PositionId%3D100119%26AdId%3D547757%26src%3Dhttps%3A%2F%2Fdimg04.c-ctrip.com%2Fimages%2F700j0r000000h23js0F05_850_360_39.jpg%26SiteID%3D%26SiteType%3D&pv=1560431850551.2yojk0.1.1&duid=&env=online&v=6&mt=1560431881429&jv=2.6.9", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R1/remarketing/js/s.js", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/stationbus_gb2312.js?2019_6_6_11_23_31", ENDITEM, 
		"Url=https://cpro.baidu.com/cpro/ui/rt.js", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=tl&pi=108001&key=pcfloatSuccess&val=pcfloatSuccess3&pv=1560431850551.2yojk0.1.1&duid=&env=online&v=6&mt=1560431890702&jv=2.6.9", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwMKgS8DC4YvSU5QVVQGLZNub3RpY2UwMSddW0B4PSctNTE4BAeGeT0nMzU4BA2BcgMLgTUFD4FyAwaBMgMTA4EIhHRzIjoHgS6JOTA1NzU0fV1d&jv=1.0.0", ENDITEM, 
		"Url=https://images4.c-ctrip.com/img3/marketing/2016/01/float_new_year/tongyong_480x194.png", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/pic/log.png", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1066331136/?value=0&label=cG9hCIyRngMQgNi7_AM&guid=ON&script=0", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?v=1&aip=1&t=dc&_r=3&tid=UA-3748357-1&cid=2146416298.1560431876&jid=992927599&_gid=202191401.1560431876&gjid=81301603&_v=j76&z=1444803541", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwMKgS8ECgMChUlOUFVUBiyTbm90aWNlMDgnXVtAeD0nLTMzNAQHhXk9JzM1BQyBcgMKgjczBA-BcgMGhDIxJ10DgQqEdHMiOgeBMIk5MTE5Nzl9XV0~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwMKgS8ECgMChUlOUFVUBiyTbm90aWNlMDgnXVtAeD0nLTM2MwQHhnk9JzM0MgQNgXIDC4I0NAQQgXIDB4M1J10DgQqEdHMiOgeBMIk5MjAxNzd9XV0~&jv=1.0.0", ENDITEM, 
		"Url=https://m.ctrip.com/restapi/soa2/12378/json/getGeneralConfigData?key=Holiday&callback=cQuery.jsonpCalendarFn", ENDITEM, 
		"Url=https://dat.gtags.net/imp/dasp3?a=9&ext_args=&vc=1&vt=0&vpc=1&rvt=0&fr=1&vrt=0&ot=4&u=https:%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearchTrain.aspx%23%23%23&sc=1536*864&ch=GBK&la=zh-CN&ti="
		"%E7%81%AB%E8%BD%A6%E7%A5%A8%E9%A2%84%E8%AE%A2%E4%B8%8E%E4%BB%A3%E8%B4%AD-%E9%AB%98%E9%93%81%E7%A5%A8%E4%BB%B7%2C%E5%8A%A8%E8%BD%A6%E7%A5%A8%E4%BB%B7-%E9%AB%98%E9%93%81%E8%AE%A2%E7%A5%A8%2C%E5%8A%A8%E8%BD%A6%E8%AE%A2%E7%A5%A8%E7%BD%91-%E6%90%BA%E7%A8%8B%E7%81%AB%E8%BD%A6%E7%A5%A8%E8%AE%A2%E8%B4%AD%E4%B8%AD%E5%BF%83%E3%80%82&v=3.0.0.9&t=1&r=0.5707405171586368", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwMKgS8ECgMChUlOUFVUBiyTbm90aWNlMDgnXVtAeD0nLTMwNAQHhnk9JzM1NQQNgXIDC4MxMDMEEYFyAwiBMQMVA4EJhHRzIjoHgS-DOTIzA4Ebg31dXQ~~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwQJgjJdBiiVc2luZ2xlRGF0ZSddW0B4PSctNDM2BAeGeT0nMzkwBA2BcgMLgzEzMwQRgXIDCIM5J10DgQmEdHMiOgeBL4k5MjA3Nzh9XV0~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCXV0~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmGL0lOUFVUBiuUc2VhcmNoYnRuJ11bQHg9Jy00MzUEB4Z5PSc0OTkEDYFyAwuDMTM0BBGBcgMIhDEyJ10DgQyEdHMiOgeBMok5MjYwMjh9XV0~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwMKgS8ECgMChUlOUFVUBiyTbm90aWNlMDgnXVtAeD0nLTMwNAQHhnk9JzM1NQQNgXIDC4MxMDMEEYFyAwiBMQMVA4EJhHRzIjoHgS-COTIDgRmENn1dXQ~~&jv=1.0.0", ENDITEM, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=a&d=s1tbMiwidXNlcmFjdGlvbiJdLFsxMDgwMDEsIjE1NjA0MzE4NTA1NTEuMnlvamswIiwxLAUWjTg0MjMyNjcwNzEyMzADGYQ1IiwiAwADAIUyLjYuOQMFljFyZzc0cXUtMWRjNms5ai16Zjkwb3YDGwMbAxsDGwMbAxuGb25saW5lBFKCeyIHV4c6ImNsaWNrAyqFeHBhdGgDCp5IVE1ML0JPRFlbQGlkPSdtYWluYm9keSddL0ZPUk0GD4phc3BuZXRGb3JtAw6HRElWWzRdLwMEgS8DBYEvBAWDMl0vAwmBLwQJgjJdBiiVc2luZ2xlRGF0ZSddW0B4PSctNDM0BAeGeT0nNDAwBA2BcgMLgzEzNQQRgXIDCIQxOSddA4EKhHRzIjoHgTCJOTI0MjU3fV1d&jv=1.0.0", ENDITEM, 
		"Url=https://eclick.baidu.com/rt.jpg?t=script&rtid=PWTzPjD&stamp=1560431918844&refer=&word=https%3A%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearchTrain.aspx%23%23%23&origin=", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(8);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=75", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=https://pic.c-ctrip.com/train/railway_v3/un_index_sel.png", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/searchtrain.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/train/railway_v3/banner4.png", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/searchtrain.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/platform/online/home/un_icon_index_type20170111.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-496,207,886,245,852,461", ENDITEM, 
		"Url=https://pic.c-ctrip.com/platform/online/home/sprite2019527.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-496,207,886,245,852,461", ENDITEM, 
		"Url=https://pic.c-ctrip.com/railway_v3/un_index.png?v=20150310", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/searchtrain.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/platform/online/home/phone_list20180116.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-496,207,886,245,852,461", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_url("AjaxGetCookie.ashx", 
		"URL=https://accounts.ctrip.com/member/ajax/AjaxGetCookie.ashx?jsonp=BuildHTML&r=0.28045777742279787&encoding=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.1; DOMAIN=trains.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=trains.ctrip.com");

	web_add_auto_header("Origin", 
		"https://trains.ctrip.com");

	lr_think_time(4);

	web_custom_request("SearchTrainHandler.ashx", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchTrainHandler.ashx?Action=getHotHotel", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=value={\"cityName\":\"上海\",\"total\":\"12\"}", 
		LAST);

	web_add_cookie("_ga=GA1.2.2146416298.1560431876; DOMAIN=trains.ctrip.com");

	web_add_cookie("_gid=GA1.2.202191401.1560431876; DOMAIN=trains.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=trains.ctrip.com");

	lr_think_time(4);

	web_custom_request("SearchTrainHandler.ashx_2", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchTrainHandler.ashx?Action=getCurrentUserBehavior", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=value={\"id\":\"\",\"vid\":\"1560431850551.2yojk0\"}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"cookieorigin");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("GetFloatUI", 
		"URL=https://m.ctrip.com/restapi/soa2/10994/json/GetFloatUI?timestamp=1560431876358", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.1; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfs=1.1; DOMAIN=m.ctrip.com");

	web_add_cookie("_ga=GA1.2.2146416298.1560431876; DOMAIN=m.ctrip.com");

	web_add_cookie("_gid=GA1.2.202191401.1560431876; DOMAIN=m.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=m.ctrip.com");

	web_add_cookie("_bfi=p1%3D108001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=m.ctrip.com");

	web_add_header("cookieOrigin", 
		"https://trains.ctrip.com");

	web_custom_request("GetFloatUI_2", 
		"URL=https://m.ctrip.com/restapi/soa2/10994/json/GetFloatUI?timestamp=1560431876358", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"PlatformType\":\"pc\",\"pageParameter\":{\"Refer\":\"\",\"UA\":\"Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F75.0.3770.80%20Safari%2F537.36\",\"PageID\":108001,\"VID\":\"1560431850551.2yojk0\"},\"marketParameter\":{\"AID\":0,\"SID\":0},\"terminalParameter\":{\"UserID\":\"\",\"CityID\":0},\"pcAuthCodeParamet\":{\"IsGetAuthCode\":true,\"AppID\":\"\",\"Length\":4}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("geturl.php", 
		"URL=http://config.pinyin.sogou.com/api/toolbox/geturl.php?h=ED32A4EFB7CB43DF1920E8BA201D9D92&v=9.1.0.2680&r=0000_sogou_pinyin_65i", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://images4.c-ctrip.com/img3/marketing/2015/12/float_pc_system/fl_open_wrap.png", "Referer=https://webresource.c-ctrip.com/ResUnionOnline/R3/float/css/pc_flaot.css", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMNzUuMC4zNzcwLjgwGikIBRABGhsKDQgFEAYYASIDMDAxMAEQsc8GGgIYCcPkGPkiBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABENCIBhoCGAkhChDUIgQgASACKAEaKQgHEAEaGwoNCAcQBhgBIgMwMDEwARDMugUaAhgJ4uLywSIEIAEgAigBGicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAlBsHBMIgQgASACKAMaKAgBEAgaGgoNCAEQCBgBIgMwMDEwBBCIFxoCGAkQ2A2RIgQgASACKAQaJwgJEAEaGQoNCAkQBhgBIgMwMDEwBhACGgIYCVWiCvciBCABIAIoBhonCA8QARoZCg0IDxAGGAEiAzAwMTABEGIaAhgJYgVkPiIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQExoCGAn2WADvIgQgASACKAEaJwgKEAgaGQoNCA"
		"oQCBgBIgMwMDEwARAFGgIYCXAaLyQiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABEIMGGgIYCYic3BsiBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEOI8GgIYCeY-XFgiBCABIAIoARopCAMQARobCg0IAxAGGAEiAzAwMTABEKKUBhoCGAnf7qcfIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARCK2wEaAhgJyQVLmyIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("_bfi=p1%3D108001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=trains.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=trains.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=trains.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560431914.1560431914.1%234%7C%7C%7C%7C%7C%23; DOMAIN=trains.ctrip.com");

	web_add_cookie("_ga=GA1.2.2146416298.1560431876; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_gid=GA1.2.202191401.1560431876; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfi=p1%3D108001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560431914.1560431914.1%234%7C%7C%7C%7C%7C%23; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560431914.1560431914.1%234%7C%7C%7C%7C%7C%23; DOMAIN=webresource.ctrip.com");

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.2; DOMAIN=crm.ws.ctrip.com");

	web_add_cookie("_bfs=1.2; DOMAIN=crm.ws.ctrip.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("Search.aspx", 
		"URL=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://trains.ctrip.com/TrainBooking/SearchTrain.aspx", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/common/c_logo2013.png", "Referer=https://webresource.c-ctrip.com/ResCRMOnline/R1/pageheader/css/PageHeader_V4.css?temp=-496,207,886,245,852,461", ENDITEM, 
		"Url=https://pic.c-ctrip.com/railway_v3/LstIcon.png?v=201602513", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/listab.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/fltdomestic111027/ico_loading.gif?121211.gif", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/listab.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/AdCallProxyV2.aspx?biztype=402&adlist=%5B%7B%22pagecode%22%3A%221%22%2C%22domid%22%3A%22divAppBanner%22%2C%22type%22%3A0%7D%5D&fscreen=0&r=ws_www", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/ol_search.min.js?2019_6_6_11_23_31.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/ol_hotel.min.js?2019_6_6_11_23_31.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.5/default/js/data/data.message.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.3/default/js/util/checkformat.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/JS/calendar.min.js?2019_6_6_11_23_31.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.5/default/js/data/data.url.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/cusersdk/~0.0.58/default/login/1.0.0/loginsdk.min.js?expires=1d", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.10/default/js/data/login.defaultconfig.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://crm.ws.ctrip.com/Customer-Market-Proxy/Ajax/DyRequest.aspx?v2=true&biztype=402&pageid=1&callback=G_Ad_DyLoad_1.DyLoad&_rm=0.5619143087853933", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);

	web_add_cookie("ASP.NET_SessionId=w01rbflr1pg0yvxjeuxzez4z; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_ga=GA1.2.2146416298.1560431876; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_gid=GA1.2.202191401.1560431876; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_bfi=p1%3D108001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=accounts.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=accounts.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=accounts.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560431914.1560431914.1%234%7C%7C%7C%7C%7C%23; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.2; DOMAIN=accounts.ctrip.com");

	web_add_cookie("_bfs=1.2; DOMAIN=accounts.ctrip.com");

	web_url("AjaxGetCookie.ashx_2", 
		"URL=https://accounts.ctrip.com/member/ajax/AjaxGetCookie.ashx?jsonp=BuildHTML&r=0.9725816293802663&encoding=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://webresource.c-ctrip.com/resh5websdkonline/R3/min/js-apss.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.2; DOMAIN=trains.ctrip.com");

	web_add_cookie("_bfs=1.2; DOMAIN=trains.ctrip.com");

	web_add_auto_header("Origin", 
		"https://trains.ctrip.com");

	web_custom_request("SearchListHandler.ashx", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getTransferList", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"BodyBinary=value={\"departure\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"arrive\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"date\":\"2019-06-14\"}", 
		LAST);

	web_custom_request("SearchListHandler.ashx_2", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getSearchList", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"BodyBinary=value={\"IsBus\":false,\"Filter\":\"0\",\"Catalog\":\"\",\"IsGaoTie\":false,\"IsDongChe\":false,\"CatalogName\":\"\",\"DepartureCity\":\"shanghaihongqiao\",\"ArrivalCity\":\"suzhoubei\",\"HubCity\":\"\",\"DepartureCityName\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"ArrivalCityName\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"DepartureDate\":\"2019-06-14\",\"DepartureDateReturn\":\"2019-06-16\",\"ArrivalDate\":\"\",\"TrainNumber\":\"\"}", 
		LAST);

	lr_think_time(8);

/* Added by Async CodeGen.
ID=LongPoll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_0_RequestCB
	LongPoll_0_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

	web_custom_request("SearchListHandler.ashx_3", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"BodyBinary=value={\"trainNum\":\"G1822\",\"departure\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"arrive\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"date\":\"2019-06-14\"}", 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_4",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t43.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G7385\",\"departure\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"arrive\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_5",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t44.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G114\",\"departure\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"arrive\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_6",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t45.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G7507\",\"departure\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"arrive\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_7",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t46.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G1768\",\"departure\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"arrive\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_8",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t47.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G1919\",\"departure\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"arrive\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_9",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t48.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G130\",\"departure\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\",\"arrive\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_10",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t49.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G1735\",\"departure\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"arrive\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("SearchListHandler.ashx_11",
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/plain",
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597",
		"Snapshot=t50.inf",
		"Mode=HTML",
		"EncType=application/x-www-form-urlencoded; charset=UTF-8",
		"BodyBinary=value={\"trainNum\":\"G42\",\"departure\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"arrive\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"date\":\"2019-06-14\"}",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

lr_start_transaction("sumbit");

	web_custom_request("SearchListHandler.ashx_12", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getQueryBooking", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"BodyBinary=value={\"trainNum\":\"G7375\",\"departure\":\"\\xE6\\x97\\xA0\\xE9\\x94\\xA1\\xE4\\xB8\\x9C\",\"arrive\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"date\":\"2019-06-14\"}", 
		EXTRARES, 
		"Url=https://pic.c-ctrip.com/train/railway_v3/un_list.png", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/listab.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		"Url=https://pic.c-ctrip.com/train/railway_v3/icon-zhongzhuan.png", "Referer=https://webresource.ctrip.com/ResTrainOnline/R1/TrainBooking/CSS/listab.css?releaseno=2019_6_6_11_23_31.css", ENDITEM, 
		LAST);

	web_custom_request("SearchListHandler.ashx_13", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getAutoPlay", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=value={\"getAutoPlay\":\"2019-06-14\"}", 
		LAST);

	web_custom_request("SearchListHandler.ashx_14", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=getAirlineList", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"BodyBinary=value={\"IsBus\":false,\"Filter\":\"0\",\"Catalog\":\"\",\"IsGaoTie\":false,\"IsDongChe\":false,\"CatalogName\":\"\",\"DepartureCity\":\"shanghaihongqiao\",\"ArrivalCity\":\"suzhoubei\",\"HubCity\":\"\",\"DepartureCityName\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"ArrivalCityName\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"DepartureDate\":\"2019-06-14\",\"DepartureDateReturn\":\"2019-06-16\",\"ArrivalDate\":\"\",\"TrainNumber\":\"\"}", 
		EXTRARES, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/jmp-1.0.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://webresource.c-ctrip.com/code/cquery/mod/animate-1.0.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,contenttype");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("getConfigs", 
		"URL=https://passport.ctrip.com/gateway/api/soa2/12024/getConfigs", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("UI2IndexHandler.ashx", 
		"Action=https://trains.ctrip.com/TrainBooking/Ajax/UI2IndexHandler.ashx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=StatisticClick", ENDITEM, 
		"Name=StatisticType", "Value=SearchListPage", ENDITEM, 
		EXTRARES, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/accountsresource/~0.0.19/default/img/app_scan.png", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("SearchGradListHandler.ashx", 
		"Action=https://trains.ctrip.com/TrainBooking/Ajax/SearchGradListHandler.ashx?Action=GetqpGrabTicketSucRateInfoJava", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=departureDate", "Value={date}", ENDITEM, 
		"Name=departure", "Value=上海虹桥", ENDITEM, 
		"Name=arrive", "Value=苏州�\x97", ENDITEM, 
		"Name=gradList", "Value=[{\"DepartureStation\":\"上海�\x97\",\"ArriveStation\":\"苏州\"},{\"DepartureStation\":\"上海\",\"ArriveStation\":\"苏州\"},{\"DepartureStation\":\"上海虹桥\",\"ArriveStation\":\"苏州�\x97\"},{\"DepartureStation\":\"上海虹桥\",\"ArriveStation\":\"苏州新区\"},{\"DepartureStation\":\"上海虹桥\",\"ArriveStation\":\"苏州\"},{\"DepartureStation\":\"上海\",\"ArriveStation\":\"苏州�\x97\"},{\"DepartureStation\":\"上海虹桥\",\"ArriveStation\":"
		"\"苏州园区\"},{\"DepartureStation\":\"上海\",\"ArriveStation\":\"苏州园区\"}]", ENDITEM, 
		EXTRARES, 
		"Url=https://webresource.c-ctrip.com/ares2/basebiz/countryCode/~1.0.0/default/country.online.js", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);

	web_custom_request("SearchListHandler.ashx_15", 
		"URL=https://trains.ctrip.com/TrainBooking/Ajax/SearchListHandler.ashx?Action=searchColudTickets", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"BodyBinary=value={\"dname\":\"\\xE4\\xB8\\x8A\\xE6\\xB5\\xB7\\xE8\\x99\\xB9\\xE6\\xA1\\xA5\",\"aname\":\"\\xE8\\x8B\\x8F\\xE5\\xB7\\x9E\\xE5\\x8C\\x97\",\"ddate\":\"2019-06-14\"}", 
		EXTRARES, 
		"Url=https://s.c-ctrip.com/bf.gif?ac=g&d="
		"%7B%22c%22%3A%5B108002%2C%221560431850551.2yojk0%22%2C1%2C2%2C%227752557188508438691%22%2C%22%3B%22%2C%22%22%2C%222.6.9%22%2C%221rg74qu-1dc6k9j-zf90ov%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%5D%2C%22d%22%3A%7B%22uinfo%22%3A%5B13%2C108001%2C1%2C%22https%3A%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearch.aspx%3Ffrom%3Dshanghaihongqiao%26to%3Dsuzhoubei%26day%3D{date}%26number%3D%26fromCn%3D%2525E4%2525B8%25258A%2525E6%2525B5%2525B7%2525E8%252599%2525B9%2525E6%2525A1%2525A5%26"
		"toCn%3D%2525E8%25258B%25258F%2525E5%2525B7%25259E%2525E5%25258C%252597%22%2C1536%2C864%2C%22cl%3D326%2Cckl%3D10%22%2C%22zh-cn%22%2C%22%22%2C%22%22%2C%22https%3A%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearchTrain.aspx%22%2C%22%3B%22%2C0%2C0%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22%22%2C%22online%22%2C1.25%2C0%2C%22%7B%5C%22tz%5C%22%3A480%2C%5C%22dt%5C%22%3Afalse%2C%5C%22rg%5C%22%3A%5C%22%5C%22%2C%5C%22lang%5C"
		"%22%3A%5C%22%5C%22%7D%22%2C%22%22%2C%22%22%2C%22%22%5D%7D%7D&mt=1560431965273&jv=2.6.9", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);

	web_add_cookie("_ga=GA1.2.2146416298.1560431876; DOMAIN=passport.ctrip.com");

	web_add_cookie("_gid=GA1.2.202191401.1560431876; DOMAIN=passport.ctrip.com");

	web_add_cookie("_bfi=p1%3D108001%26p2%3D0%26v1%3D1%26v2%3D0; DOMAIN=passport.ctrip.com");

	web_add_cookie("MKT_Pagesource=PC; DOMAIN=passport.ctrip.com");

	web_add_cookie("appFloatCnt=1; DOMAIN=passport.ctrip.com");

	web_add_cookie("__zpspc=9.1.1560431914.1560431914.1%234%7C%7C%7C%7C%7C%23; DOMAIN=passport.ctrip.com");

	web_add_cookie("_bfa=1.1560431850551.2yojk0.1.1560431850551.1560431850551.1.2; DOMAIN=passport.ctrip.com");

	web_add_cookie("_bfs=1.2; DOMAIN=passport.ctrip.com");

	web_add_cookie("_gat=1; DOMAIN=passport.ctrip.com");

	web_add_header("contentType", 
		"application/json; charset=utf-8");

	web_custom_request("getConfigs_2", 
		"URL=https://passport.ctrip.com/gateway/api/soa2/12024/getConfigs", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"Data\":{\"appid\":\"100004116\",\"keyname\":\"permit.securecert.mask.secretkey.list\"}}", 
		EXTRARES, 
		"Url=https://eclick.baidu.com/rt.jpg?t=script&rtid=PWTzPjD&stamp=1560431967878&refer=https%3A%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearchTrain.aspx&word=https%3A%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearch.aspx%3Ffrom%3Dshanghaihongqiao%26to%3Dsuzhoubei%26day%3D{date}%26number%3D%26fromCn%3D%2525E4%2525B8%25258A%2525E6%2525B5%2525B7%2525E8%252599%2525B9%2525E6%2525A1%2525A5%26toCn%3D%2525E8%25258B%25258F%2525E5%2525B7%25259E%2525E5%25258C%252597&origin=ctrip.com", "Referer=https://"
		"trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://dat.gtags.net/imp/dasp3?a=9&ext_args=&vc=1&vt=53&vpc=2&rvt=53&fr=0&vrt=0&ot=4&u=https:%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearch.aspx%3Ffrom%3Dshanghaihongqiao%26to%3Dsuzhoubei%26day%3D{date}%26number%3D%26fromCn%3D%2525E4%2525B8%25258A%2525E6%2525B5%2525B7%2525E8%252599%2525B9%2525E6%2525A1%2525A5%26toCn%3D%2525E8%25258B%25258F%2525E5%2525B7%25259E%2525E5%25258C%252597&sc=1536*864&ch=GBK&la=zh-CN&ti="
		"%E4%B8%8A%E6%B5%B7%E8%99%B9%E6%A1%A5%E5%88%B0%E8%8B%8F%E5%B7%9E%E5%8C%97%E7%81%AB%E8%BD%A6%E7%A5%A8%E7%BD%91%E4%B8%8A%E8%AE%A2%E7%A5%A8_%E7%81%AB%E8%BD%A6%E7%A5%A8%E4%BB%B7%E9%A2%84%E8%AE%A2%E6%9F%A5%E8%AF%A2%E3%80%90%E6%90%BA%E7%A8%8B%E7%81%AB%E8%BD%A6%E7%A5%A8%E9%A2%84%E8%AE%A2%E3%80%91&v=3.0.0.9&ru=https:%2F%2Ftrains.ctrip.com%2FTrainBooking%2FSearchTrain.aspx&t=1&r=0.5908751607658034", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}"
		"&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		"Url=https://googleads.g.doubleclick.net/pagead/viewthroughconversion/1066331136/?value=0&label=cG9hCIyRngMQgNi7_AM&guid=ON&script=0", "Referer=https://trains.ctrip.com/TrainBooking/Search.aspx?from=shanghaihongqiao&to=suzhoubei&day={date}&number=&fromCn=%25E4%25B8%258A%25E6%25B5%25B7%25E8%2599%25B9%25E6%25A1%25A5&toCn=%25E8%258B%258F%25E5%25B7%259E%25E5%258C%2597", ENDITEM, 
		LAST);
	lr_end_transaction("sumbit", LR_AUTO);


	return 0;
}