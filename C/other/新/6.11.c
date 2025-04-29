#include <stdio.h> 
int iyear(int i){
	if(i>1){
		return iyear(i-1)+2;
	}
	else
		return 10;
}
int main(){
	printf("the sum is %d",iyear(5));
    return 0;
}
