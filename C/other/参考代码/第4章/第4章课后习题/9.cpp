#include "stdio.h"
int main()
{ 
	int  k;
	for(k=1;;k++)
		if(k%2==1&&k%3==2&&k%5==4)
			break;
	printf("%d   %f",k,0.4*k);
	return 0;
}

