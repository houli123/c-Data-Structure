#include "Stdio.h"
int main()
{
	int i,j,k;/*iΪ������Ŀ��jΪĸ����Ŀ��kΪС����Ŀ*/
	for(i=0;i<=100;i++)
		for(j=0;j<=100;j++)
			for(k=0;k<=100;k++)
				{
					if(5*i+3*j+k/3==100&&(i+j+k==100)&&(i!=0)&&(j!=0)&&(k!=0)&&(k%3==0))
						printf("����%dֻ��ĸ��%dֻ��С��%dֻ \n",i,j,k);
				}
	return 0;

}
