#include <stdio.h> 
int main()
{
	float fscore;
	int itemp=-1;
	printf("ÇëÊäÈëÄãµÄ³É¼¨£º");
	scanf("%f",&fscore);
	if(fscore >= 0 && fscore <= 100)
		itemp=fscore/10;
	switch(itemp)
	{
		case 0:case 1:case 2:case 3:case 4:case 5:
			printf("E");break;
		case 6:printf("D");break;
		case 7:printf("C");break;
		case 8:printf("B");break;
		case 9:case 10:printf("A");break;
		default:printf("Error!!!");
	}
}

	

