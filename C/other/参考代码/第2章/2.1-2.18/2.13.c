#include <stdio.h>  //p39 2.13
int main()  //0494���� 
{
	int iwine = 1, ibeer = 2, itemp = ibeer;
	printf("iwine = %d, ibeer = %d\n",iwine, ibeer);//��֮ǰ 
	ibeer = iwine; iwine = itemp;  //�����������һ�� 
	printf("iwine = %d, ibeer = %d",iwine, ibeer);//��֮�� 
	getch();
}
