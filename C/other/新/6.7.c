#include <stdio.h> 
float favg(float ch1[2]){
	float fsum=0;
	for(int i=0;i<2;i++){
		fsum+=ch1[i];
	}
	return fsum;
}
int main(){
	float ch[2]={11,22},fsum;
	fsum=favg(ch)/2.0;
	printf("%f",fsum);
    return 0;
}
