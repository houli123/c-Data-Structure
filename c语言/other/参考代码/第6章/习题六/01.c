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
	printf("������f(x)Ҫ���x��ֵ��");
	scanf("%lf",&x);
	printf("f(%.1lf)��ֵΪ %.2lf",x,fnFum(x));
	return 0;
}
