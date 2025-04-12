#include <stdio.h>
double fnFum(double x);
double fnFum(double x)
{
	if(x > 1)
		return x*x+1;
	else if(x < -1)
		return x*x-1;
	else 
		return x*x; 
}
int main()
{
	double x;
	printf("请输入f(x)要求的x的值：");
	scanf("%lf",&x);
	printf("f(%.1lf)的值为 %.2lf",x,fnFum(x));
	return 0;
}
