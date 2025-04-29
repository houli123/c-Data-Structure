#include <stdio.h>  //p45 习题二第三小题
#include <math.h>
#define pai 3.1415926
int main()  //0494刘杰 
{
    float fr, farea, fsix, fpercent;
    printf("请输入圆的半径：");
    scanf("%f",&fr);
    farea = pai * fr * fr;
    fsix = sqrt(3) * 3 * fr * fr / 2;
    fpercent = fsix / farea;
    printf("圆面积=%.2f,六边形面积=%.2f,六边形\
	占圆的百分比=%.2f",farea,fsix,fpercent);
    getch();
}

