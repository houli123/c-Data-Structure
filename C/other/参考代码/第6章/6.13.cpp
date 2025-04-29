#include "stdio.h"
int iS1,iS2,iS3;
int fnVs(int iA,int iB,int iC)
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
	iV=fnVs(iL,iW,iH);
	printf("v=%d,s1=%d,s2=%d,s3=%d",iV,iS1,iS2,iS3);
	return 0;
}
