#include "stdio.h"
int main()
{
	char cIdiom1[80],cIdiom2[80];
	int j,i;
	printf("\nPlease input the first idiom:");
	gets(cIdiom1);
	printf("\nPlease input the second idiom:");
	gets(cIdiom2);
	i=0;
	while(cIdiom1[i]!='\0')
		i++;
	j=0;
	while(cIdiom1[j]!=0)
		{
			cIdiom1[i+j]=cIdiom2[j];
			j++;	
		}
	cIdiom1[i+j]='\0';
	printf("\n The result is :%s",cIdiom1);
	return 0;
}
