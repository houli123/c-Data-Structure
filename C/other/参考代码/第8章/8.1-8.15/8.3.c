#include <stdio.h>  //����22190494
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
	printf("���ݺ��������%s��Ӣ�����%d����ѧ����%d��c���Է���%d������������%d-%d-%d"
	, stBak.cname, stBak.ienglish, stBak.imath, stBak.ipro, stBak.stbirth.iyear, 
	stBak.stbirth.imonth, stBak.stbirth.iday);
} 
