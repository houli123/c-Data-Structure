#include <stdio.h> 
int main(){
	int i1=1,i2=2,i3=i1;
	printf("%d,%d\n",i1,i2);
	i1=i2;
	i2=i3;
	printf("%d,%d\n",i1,i2);
    return 0;
}
