#include <stdio.h>  //p66ϰ���� 7.
int main() //0494����
{
	int iyear,iday,imonth,i1;
	printf("�����������գ�");
	scanf("%d%d%d",&iyear,&imonth,&iday);
	switch(imonth)
	{	case 1:i1 = iday;break;case 2:i1 = iday + 31;break;
		case 3:i1 = iday + 59;break;case 4:i1 = iday + 90;break;
		case 5:i1 = iday + 120;break;case 6:i1 = iday + 151;break;
		case 7:i1 = iday + 181;break;case 8:i1 = iday + 212;break;
		case 9:i1 = iday + 243;break;case 10:i1 = iday + 273;break;
		case 11:i1 = iday + 304;break;case 12:i1 = iday + 334;break;
		default:printf("error!!!") ;
	}
	if (imonth>2 && ((iyear%4==0&&iyear%100!=0) || (iyear%400==0)))
		i1++;
printf("%d��%d��%d���Ǹ���ĵ�%d��",iyear,imonth,iday,i1);
} 
