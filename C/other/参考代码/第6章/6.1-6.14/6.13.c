#include <stdio.h>  //����22190494 
int iS1,iS2,iS3;
int fnV(int iA,int iB,int iC);
int fnV(int iA,int iB,int iC)
{
	int iV;
	iV=iA*iB*iC;
	iS1=iA*iB;
	iS2=iA*iC;
	iS3=iB*iC;
	return iV;
}
int main()
{
	int iV,iL,iW,iH;
	scanf("%d%d%d",&iL,&iW,&iH);
	iV=fnV(iL,iW,iH);
	printf("�����������ֱ���%d,%d,%d,�����%d",iS1,iS2,iS3,iV);
	return 0;
}
