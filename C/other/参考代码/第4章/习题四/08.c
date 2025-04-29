#include <stdio.h>
#include <time.h>  //导入时间库 
void main()
{
	int i,ii,i1=0,i2=100; 
	srand((unsigned)time(NULL));  //时间库函数 
	//设置随机数种子，防止每次生成的随机数一样 
	ii=rand()%100+1;//随机数函数 
	for(;!(i==ii);)
	{
		printf("请猜一个%d-%d的整数：",i1,i2);
		scanf("%d",&i);
		if(ii<i)
		{printf("该数大了！\n");i2=i;}
		else if(ii>i)
		{printf("该数小了!\n");i1=i;}
	}
	printf("你猜对啦！！");
		
}
