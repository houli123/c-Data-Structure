#include "stdio.h"
int main()
{
	float fben = 1000,f1,f2,f3,f4,f5;
	f1=fben*(1+5*5.85%);
	printf("The one is %0.2f\n",f1);
	f2 = fben*(1+2*4.68%);
	f2 = f2*(1+3*5.4%);
	printf("The two is %0.2f\n",f2);
	f3 = fben*(1+3*5.4%);
	f3 = f3*(1+2*4.68%);	
	printf("The three is %0.2f\n",f3);
	f4 = fben * pow(1+4.14%,5);
	printf("The four is %0.2f\n",f4);
	f5 = fben * pow(1+0.72%/4,4*5);
	printf("The five is %0.2f\n",f5);
	return 0;
}
