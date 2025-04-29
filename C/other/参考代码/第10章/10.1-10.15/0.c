#include<stdio.h>
#include<limits.h>
int fn(float a,int b)
{
	return a+b;
}
int main()
{
	int min = INT_MIN;
	int max = INT_MAX;
	int x;
	printf("%d %d\n",max,min);
	x=fn(5.2,2);
	printf("%d",x);
}
