#include <stdio.h> 
void fn(int ix[],int n){
	for(int i=0;i<n;i++){
		printf("%d,",*(ix+i));
	}
}

int main(){
	int ix[]={1,2,3},*pix=ix;
	fn(pix,3);
    return 0;
}
