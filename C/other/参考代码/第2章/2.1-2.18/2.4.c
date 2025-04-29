#include <stdio.h>  //p26 2.4
int main()  //0494刘杰 
{
	float fEnglish, fChinese, fMath, fSum;
	printf("请按照顺序输入语数英成绩，用空格隔开");
	scanf("%f%f%f", &fChinese, &fMath, &fEnglish);
	fSum = fEnglish + fChinese + fMath;
	printf("总分 = %.2f,平均分 = %.2f",fSum ,fSum/3);
	getch();
}
