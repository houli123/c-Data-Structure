#include <stdio.h>
int fnMax(int iNum1,int iNum2);
int fnMax(int iNum1,int iNum2){
	if(iNum1>iNum2)
		return iNum1;
	else 
		return iNum2;
} 
int main()
{
	int iNum1,iNum2,iNum3,iTemp;
	printf("请输入三个整数\n"); 
	scanf("%d%d%d",&iNum1,&iNum2,&iNum3);
	//iTemp=fnMax(iNum1,iNum2);
	printf("the max of %d,%dand %d is %d",iNum1,iNum2,iNum3,fnMax(fnMax(iNum1,iNum2),iNum3));
	return 0;
}
