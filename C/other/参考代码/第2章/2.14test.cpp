#include "stdio.h"
#include "math.h"
#define PI 3.1415926
int main()
{
	
	float fX,fY,fSin,fCos,fTan,fCtan;
	printf("Please input a angle");
	scanf("%f",&fX);
	fY = PI * fX /180;
	/*C���Ե�sin����Ĭ������baiΪ���ȣ�
	�����Ҫת��Ϊ�Ƕȣ�ת����ʽΪ����=PI*�Ƕ�/180*/
	fSin = sin(fY);
	fCos = cos(fY);
	fTan = tan(fY);
	fCtan = 1.0 / tan(fY);
	printf("sin(%f)=%f,cos(%f)=%f.tan(%f)=%f,ctan(%f),%f",fX,fSin,fX,fCos,fX,fTan,fX,fCtan);
	return 0;
}


