#include <stdio.h>  //p66习题三 4.
#include <math.h>  //0494刘杰
int main()
{
	float f1, f2,f3,farea,ftemp,fperimeter;
	int ibuer;
	printf("请输入三角形三条边的长度：");
	scanf("%f%f%f",&f1,&f2,&f3);ftemp =(f1+f2+f3)/2;//运用的海伦公式 
	ibuer = (f1+f2>f3)&&(f1+f3>f2)&&(f2+f3>f1);
	if (ibuer){fperimeter=f1+f2+f3;
		farea=sqrt(ftemp*(ftemp-f1)*(ftemp-f2)*(ftemp-f3));
		printf("三角形周长为%.2f,面积为%.2f",fperimeter,farea);} 
	else if (f1+f2<=f3)
		printf("因为%f+%f<=%f，所以构不成三角形",f1,f2,f3);
	else if (f1+f3<=f2)
		printf("因为%f+%f<=%f，所以构不成三角形",f1,f3,f2);
	else if (f3+f2<=f1)
		printf("因为%f+%f<=%f，所以构不成三角形",f3,f2,f1);
}
