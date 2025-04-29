#include "stdio.h"
long fnFact(int n)
{
	long iS=1;
	int i;
	for(i=1;i<=n;i++)
		iS=iS*i;
	return iS; 
}
int main()
{
	long iResult;
	iResult = fnFact(10)/fnFact(10-4)/fnFact(4);
	printf("%ld",iResult);
	return 0;
}
