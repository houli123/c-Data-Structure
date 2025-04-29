#include <stdio.h> 
#define N 3

void fnswap(int *pix,int *piy){
	int itemp;
	if(*pix > *piy){
		itemp=*pix;
		*pix=*piy;
		*piy=itemp;
	}
}

int main(){
	int ix,iy,iz;
	printf("请分别输入三位同学的分数：");
	scanf("%d%d%d",&ix,&iy,&iz);
	fnswap(&ix,&iy);
	fnswap(&iy,&iz);
	fnswap(&ix,&iy);
	printf("%d %d %d",ix,iy,iz);
    return 0;
}
