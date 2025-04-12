#include <stdio.h> 
int main(){
	int i,isum;
	i=1;isum=0;
	do{
		isum=isum+i;
		i++;
	}while(i<=10);
	printf("the sum is %d",isum);
    return 0;
}
