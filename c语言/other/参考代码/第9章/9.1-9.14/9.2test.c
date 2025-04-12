#include <stdio.h>
int main(){
	int x,y,z;
	int *pix=&x,*piy=&y,*piz=&z;
	printf("请输入三个整数：");
	scanf("%d%d%d",&x,&y,&z);
	if(*pix>=*piy){
		if(*piy>=*piz){
			printf("min=%d",*piz);
		}
		else
			printf("min=%d",*piy);
	}
	else{
		if(*pix>=*piz){
			printf("min=%d",*piz);
			}
		else
			printf("min=%d",*pix);
	}	
    return 0;
}
