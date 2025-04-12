#include <stdio.h>
void main()
{
	float f1,f2;char c='0';
	while(c!='#')  //如果第二个数是'#' 则结束循环 
	{
		printf("请输入你要进行的运算：");
		scanf("%f%c%f",&f1,&c,&f2);
		switch(c)  //判断要进行的运算操作 
		{
			case '+':printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1+f2);break;
			case '-':printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1-f2);break;
			case '*':printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1*f2);break;
			case '/':
				if (f2!=0)  //当除法时，判断分母是否为0 
					{printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1/f2);break;}
				else
					{printf("分母不能为0!!\n");break;}
			default:printf("未知错误！！\n");
		}
	}
}
