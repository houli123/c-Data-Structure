#include "stdio.h"
int iA=100,iB=10;
void fnSum()
{
	int iC;
	iC=iA+iB;
	printf("%d,",iC);
 } 
 int main()
 {
 	int iA=1,iC;
 	iC=iA+iB;
 	printf("%d ",iC);
 	fnSum();
	 return 0;
 }
