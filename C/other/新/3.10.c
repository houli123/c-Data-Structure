#include <stdio.h> 
int main(){
	float fscore;
	int itemp=-1;
	printf("请输入分数：");
	scanf("%f",&fscore);
	if(fscore<=100 && fscore>=0){
		itemp=fscore/10;
	}
	switch(itemp){
		case 0:case 1:case 2:case 3:case 4:case 5:
			printf("E");
			break;
		case 6:
			printf("D");
			break;
		case 7:
			printf("C");
			break;
		case 8:
			printf("B");
			break;	
		case 9:case 10:
				printf("A");
				break;	
		default:
			printf("输入错误！");
	}
    return 0;
}
