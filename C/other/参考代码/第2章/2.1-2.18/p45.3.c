#include <stdio.h>  //p45 ϰ�������С��
#include <math.h>
#define pai 3.1415926
int main()  //0494���� 
{
    float fr, farea, fsix, fpercent;
    printf("������Բ�İ뾶��");
    scanf("%f",&fr);
    farea = pai * fr * fr;
    fsix = sqrt(3) * 3 * fr * fr / 2;
    fpercent = fsix / farea;
    printf("Բ���=%.2f,���������=%.2f,������\
	ռԲ�İٷֱ�=%.2f",farea,fsix,fpercent);
    getch();
}

