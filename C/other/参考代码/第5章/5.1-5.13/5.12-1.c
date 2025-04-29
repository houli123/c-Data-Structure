#include "stdio.h"
void main()
{
	char cI1[80],cI2[80],cI3[80],cI4[80];
	int i=0,j=0,k=0,n=0;
	printf("Please input the first idiom:\n");
	gets(cI1);
	printf("Please input the second idiom:\n");
	gets(cI2);
	printf("Please input the third idiom:\n");
	gets(cI3);
	printf("Please input the forth idiom:\n");
	gets(cI4);
	while (cI1[i]!='\0')
		i++;
	while (cI2[j]!='\0')
		{
			cI1[i+j]=cI2[j];
			j++;
		}
	cI1[i+j]='\n';
	while (cI3[k]!='\0')
		{
			cI1[i+j+1+k]=cI3[k];
			k++;
		}
	while (cI4[n]!='\0')
		{
			cI1[i+j+1+k+n]=cI4[n];
			n++;
		}
	printf("The result is:\n%s",cI1);
	getch();
}
