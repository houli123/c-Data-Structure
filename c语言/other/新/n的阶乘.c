#include <stdio.h> 
extern long fn(int i){
	if(i>1){
		return i*fn(i-1);
	}
	else return i;
}
int main(){
	int i;
	printf("������Ҫ��Ľ׳�n��");
	scanf("%d",&i);
	printf("%d!=%ld",i,fn(i));
    return 0;
}
