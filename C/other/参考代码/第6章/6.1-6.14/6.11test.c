#include <stdio.h>
long fnjie(int n)
{
	long isum;
	if(n==1){
		isum=1;
	}
	else
		isum = n*fnjie(n-1);
	return isum;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d!=%ld",n,fnjie(n));
	return 0;
}
