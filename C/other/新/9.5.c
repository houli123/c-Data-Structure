#include <stdio.h> 
int main(){
	int idate[]={1,3,6},*pint=idate;
	printf("%d,%d,%d,%d",&idate,(idate),pint[0],*pint);
    return 0;
}
