#include <stdio.h>
void main()
{
	float f1,f2;char c='0';
	while(c!='#')  //����ڶ�������'#' �����ѭ�� 
	{
		printf("��������Ҫ���е����㣺");
		scanf("%f%c%f",&f1,&c,&f2);
		switch(c)  //�ж�Ҫ���е�������� 
		{
			case '+':printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1+f2);break;
			case '-':printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1-f2);break;
			case '*':printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1*f2);break;
			case '/':
				if (f2!=0)  //������ʱ���жϷ�ĸ�Ƿ�Ϊ0 
					{printf("%.2f %c %.2f = %.2f\n",f1,c,f2,f1/f2);break;}
				else
					{printf("��ĸ����Ϊ0!!\n");break;}
			default:printf("δ֪���󣡣�\n");
		}
	}
}
