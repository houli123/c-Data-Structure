#include <stdio.h> 
int main(){
	float fscore;char c='a';
	printf("������һ��������");
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
		printf("�������");
	else
		c='E';
	
	if(c!='a')
		printf("����Ϊ��%c",c);
    return 0;
}
