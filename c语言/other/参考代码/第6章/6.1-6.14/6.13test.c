#include <stdio.h>
int ia=100,ib=10;
void fnsum1(int ia,int ib)
{
	int ic;
	ia=2;ib=2;
	ic=ia+ib;
	printf("%d ",ic);
}
void fnsum2()
{
	int ic;
	ic=ia+ib;
	printf("%d ",ic);
}
int main()
{
	int ia=1,ib=1;
	register int ic;
	fnsum1(ia,ib);
	fnsum2();
	ic=ia+ib;
	printf("%d ",ic);
    return 0;
}
