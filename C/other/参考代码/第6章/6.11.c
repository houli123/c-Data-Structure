#include "stdio.h"
int fnAge(int n);
int fnAge(int n)
{
	int iAge;
	if(n==1)
		iAge = 10;
	else 
		iAge = fnAge(n-1)+2;
	return iAge;
}

void main()
{
	printf("������˵������� %d",fnAge(5));
}
