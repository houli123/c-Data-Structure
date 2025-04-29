#include "Stdio.h"
int main()
{
	int i,j,k;/*i为公鸡数目，j为母鸡数目，k为小鸡数目*/
	for(i=0;i<=100;i++)
		for(j=0;j<=100;j++)
			for(k=0;k<=100;k++)
				{
					if(5*i+3*j+k/3==100&&(i+j+k==100)&&(i!=0)&&(j!=0)&&(k!=0)&&(k%3==0))
						printf("公鸡%d只，母鸡%d只，小鸡%d只 \n",i,j,k);
				}
	return 0;

}
