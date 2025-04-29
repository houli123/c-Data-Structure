#include <stdio.h> 
void fnswap(int *ix,int *iy){
	int itemp;
	itemp=*ix;
	*ix=*iy;*iy=itemp;
}

int main(){
	int i1=1,i2=2;
	fnswap(&i1,&i2);
	printf("a=%d,b=%d",i1,i2);
    return 0;
}
