#include <stdio.h>  //p66习题三 3.
int main() //0494刘杰
{
	int iday,ihour;
	float ftax,fwage;
	printf("请输入星期序号和工作小时：");
	scanf("%d%d",&iday,&ihour);
	switch(iday)
	{
		case 1:case 2:case 3:case 4:case 5: //周一到周五 
			fwage=20*ihour;ftax=fwage*0.045;  //工资和税款计算公式 
			break;
		case 6:case 7:fwage=20*3*ihour;  //周六周日 
			ftax=fwage*0.045;
	}
	printf("该日的工资为%.2f,税金为%.2f",fwage,ftax);
	return 0;
} 
