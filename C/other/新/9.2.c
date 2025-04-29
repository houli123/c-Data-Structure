#include <stdio.h> 
int main(){
	int ix,iy;
	int *pix=&ix,*piy=&iy;
	scanf("%d%d",pix,piy);  //
	if(*pix>*piy)
		printf("%d	%d",*piy,*pix);
	else
		printf("\n%d	%d",*pix,*piy);
    return 0;
}
