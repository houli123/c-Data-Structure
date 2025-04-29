#include <stdio.h> 
int main()
{
	long isum=0;
	int i;
	for(i=1;i<=100;i++)
		isum+=i*i;
	printf("isum=%ld",isum);
    return 0;
}
