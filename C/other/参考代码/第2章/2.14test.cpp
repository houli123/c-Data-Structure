#include "stdio.h"
#include "math.h"
#define PI 3.1415926
int main()
{
	
	float fX,fY,fSin,fCos,fTan,fCtan;
	printf("Please input a angle");
	scanf("%f",&fX);
	fY = PI * fX /180;
	/*C语言的sin函数默认输入bai为弧度，
	因此需要转化为角度，转化公式为弧度=PI*角度/180*/
	fSin = sin(fY);
	fCos = cos(fY);
	fTan = tan(fY);
	fCtan = 1.0 / tan(fY);
	printf("sin(%f)=%f,cos(%f)=%f.tan(%f)=%f,ctan(%f),%f",fX,fSin,fX,fCos,fX,fTan,fX,fCtan);
	return 0;
}


