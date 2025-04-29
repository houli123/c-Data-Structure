#include "stdio.h"
int fnPrime(int n)
{
	int k;
 	for(k=3;k<n;k++)
    	if (n%k==0)
      		break;
 	if(k>=n)
    	return 1;
 	else
    	return 0;
}
int main()
{
	int i;
 	for(i=2;i<=100;i++)
 	if(fnPrime(i)==1)
 		printf("%d  ",i);
	 return 0;
 }

