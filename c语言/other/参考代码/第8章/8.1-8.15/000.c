#include <stdio.h> 
struct student{
	char c[100];
	int i;
}stA={"abc",6};

int main(){
	printf("%s %d\n",stA.c,stA.i);
	stA.i=666;
	stA.c="bcd";
	printf("%s %d",stA.c,stA.i);
    return 0;
}
