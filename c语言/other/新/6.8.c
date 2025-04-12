#include <stdio.h> 
#define N 3
void ichange(int igao[],int l){
	int itemp;
	for(int i=0;i<l;i++)
		for(int k=l-1;k>i;k--)
			if(igao[k]<igao[k-1]){
				itemp=igao[k];igao[k]=igao[k-1];igao[k-1]=itemp;
			}
}
int main(){
	int igao[N]={3,2,1};
	ichange(igao,N);
	for(int i=0;i<N;i++)
		printf("%d ",igao[i]);
    return 0;
}
