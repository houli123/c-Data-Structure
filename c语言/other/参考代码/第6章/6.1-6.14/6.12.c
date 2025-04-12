#include <stdio.h>
int iA=100,iB=10;
void fnSum()
{
	int iC;
	iC=iA+iB;
	printf("%d",iC);
}
void main()
{
	int iA=1,iC;
	iC=iA+iB;
	printf("%d ",iC);
	fnSum();
}
