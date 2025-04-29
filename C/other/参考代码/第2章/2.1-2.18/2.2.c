#include <stdio.h>  //p24  2.2
int main()
{
	int iyear = 2022, ivolume = 250;
	int imonth = 10, iday = 11;
	float fprice = 2.5;  //定义后输出就完事了 
	printf("Name:ChenGuang Milk\n");
	printf("Size:%dml\n",ivolume);
	printf("Price:RMB%.2f\n",fprice);
	printf("Orgin:ShenZhen\n");
	printf("Date:%d.%d.%d\n",iyear,imonth,iday);
	getch();
	return 0;
}
