#include "stdio.h"
float fnAvg(float fScore[10]);
float fnAvg(float fScore[10])
{
	float fSum=0;
	int i;
	for(i=0;i<10;i++)
		fSum=fSum+fScore[i];
	return fSum/10;
 } 
 int main()
 {
 	int i;
 	float fScore[10],fAvg;
 	for(i=0;i<10;i++)
 		scanf("%f",&fScore[i]);
 	fAvg=fnAvg(fScore);
 	printf("\n the avg of score is %f",fAvg);
 	return 0;
 }
