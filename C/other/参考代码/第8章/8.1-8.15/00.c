#include <stdio.h>
int main()
{
	struct date{
		int iyear,imonth,iday;
	};
	struct student{
		char cname[8];
		int imath,ienglish,iprog;
		struct date birth; 
	}storg={"Tom",80,90,85,1986,11,30},stbak;
	stbak=storg;
	printf("%s %d %d %d,%d-%d-%d",stbak.cname,stbak.imath, stbak.ienglish, stbak.iprog, stbak.birth.iyear, stbak.birth.imonth, stbak.birth.iday);
}
