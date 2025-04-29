#include <stdio.h> 
int main()
{
	int iwei;float fsum;
	printf("请输入货物的重量(kg)：");
	scanf("%d",&iwei);
	if(iwei<=5 && iwei>0)
		fsum=iwei*3;
	else if(iwei<=10 && iwei>5)
		fsum=15 + 3.5*(iwei-5);
	else if(iwei<=20 && iwei>10)
		fsum=15 + 17.5 + 4*(iwei-10);
	else if(iwei<=30 && iwei>20)
		fsum=15 + 17.5 + 40 + 4.5*(iwei-20);
	else if(iwei<=50 && iwei>30)
		fsum=15 + 17.5 + 40 + 45 + 5*(iwei-30);
	else if(iwei > 50)
		printf("拒收");
	else	
		printf("输入错误");
	printf("快递费为：%.1f",fsum);
    return 0;
}
