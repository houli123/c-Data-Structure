#include <stdio.h> 
#include <math.h>
long fnxy(int x,int y){
	long isum;
	isum=pow(x,y);
	return isum;
}
int main()
{
	int ix,iy;
	scanf("%d%d",&ix,&iy);
	printf("isum=%ld",fnxy(ix,iy));
    return 0;
}
