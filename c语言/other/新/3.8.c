#include <stdio.h> 
int main(){
	float fscore;char c='a';
	printf("请输入一个分数：");
	scanf("%f",&fscore);
	if(fscore>=90 && fscore<=100)
		c='A';
	else if(fscore>=80 && fscore<=89)
		c='B';
	else if(fscore>=70 && fscore<=79)
		c='C';
	
	else if(fscore>=60 && fscore<=69)
		c='D';
	
	else if(fscore>100 || fscore<0)
		printf("输入错误");
	else
		c='E';
	
	if(c!='a')
		printf("分数为：%c",c);
    return 0;
}
