#include "stdio.h"

int main()
{
	float fEnglish,fChinese,fMath;
	float fSum,fAve;
	printf("Please input 3 scores:");
	scanf("%f%f%f",&fEnglish,&fChinese,&fMath); 
	fSum = fEnglish + fChinese + fMath;
	fAve = fSum/3;
	printf("Sum=%0.2f,Average%0.2f",fSum,fAve);
	return 0;
 } 
