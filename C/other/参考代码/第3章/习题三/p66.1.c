#include <stdio.h>  //p66ϰ���� 1.
int main() //0494���� 
{
	int iyear,i1;
	printf("������һ����ݣ�");
	scanf("%d",&iyear);
	i1 = (iyear%4==0&&iyear%100!=0) || (iyear%400==0);//�ж��Ƿ�Ϊ���� 
	if (i1)
	{
		printf("%dΪ����",iyear);
	}
	else
		printf("%d��������",iyear);
	return 0;
}
