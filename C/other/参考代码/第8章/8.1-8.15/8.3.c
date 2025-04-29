#include <stdio.h>  //刘杰22190494
void main()
{
	struct date{
		int iyear,imonth,iday;
	};
	struct student{
		char cname[8];
		int ienglish,imath,ipro;
		struct date stbirth;
	};
	struct student stOrg={"Tom",80,90,85,2014,12,17},stBak;
	stBak = stOrg;
	printf("备份后的数据是%s，英语分数%d，数学分数%d，c语言分数%d，出生年月日%d-%d-%d"
	, stBak.cname, stBak.ienglish, stBak.imath, stBak.ipro, stBak.stbirth.iyear, 
	stBak.stbirth.imonth, stBak.stbirth.iday);
} 
