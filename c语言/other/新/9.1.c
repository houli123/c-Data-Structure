#include <stdio.h>
int main(){
	int ix,*pix;
	ix=10;pix=&ix;
	printf("pix=%x\n&ix=%x\n*pix=%d\nix=%d",pix,&ix,*pix,ix);
}
