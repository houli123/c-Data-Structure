#include <stdio.h>
int fnMax(int iNum1,int iNum2,int iNum3);
int fnMax(int iNum1,int iNum2,int iNum3)
{	
	int iMax;
	if(iNum1>iNum2)
		iMax = iNum1;
	else 	
		iMax = iNum2;
	if(iNum3>iMax)
		iMax = iNum3;			
	return iMax;
}
int fnMin(int iNum1,int iNum2,int iNum3);
int fnMin(int iNum1,int iNum2,int iNum3)
{
	int iMin;
	if(iNum1<iNum2)
		iMin =iNum1;
	else 
		iMin = iNum2;
	if(iNum3<iMin)
		iMin = iNum3;
	return iMin;
}
int fnCha(int iNum1,int iNum2,int iNum3);
int fnCha(int iNum1,int iNum2,int iNum3)
{
	int iCha;
	iCha = fnMax(iNum1,iNum2,iNum3)-fnMin(iNum1,iNum2,iNum3);
	return iCha;
}
void main()
{
	int iNum1,iNum2,iNum3;
	printf("��������������ӵĸ���\n");
	scanf("%d%d%d",&iNum1,&iNum2,&iNum3);
	printf("���ֵ����Сֵ�Ĳ���%d",fnCha(iNum1,iNum2,iNum3));
}
