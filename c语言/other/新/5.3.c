#include <stdio.h> 
#define N 10
int main(){
	int icontest[N]={},i=0,imax=0;
	printf("������Ҫ��������ݣ��Կո��س�������");
	for(i=0;i<N;i++){
		scanf("%d",&icontest[i]);
	}
	for(i=0;i<N;i++){
		if(icontest[i]>imax){
			imax=icontest[i];
		}
	}
	printf("max=%d",imax);
    return 0;
}
