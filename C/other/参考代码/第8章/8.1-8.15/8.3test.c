#include <stdio.h> 
struct new_book{
	char cname[30],canthor[10],cpublish[30];
	float fprice;
}newbook;
int main()
{
	printf("��ֱ�������������������ߡ����ۺͳ����磺");
	scanf("%s%s%f%s",newbook.cname, newbook.canthor, &newbook.fprice, newbook.cpublish);
	printf("����Ϊ��%s���������ǣ�%s������Ϊ��%.1f��������Ϊ��%s",newbook.cname, newbook.canthor, newbook.fprice, newbook.cpublish);
    return 0;
}
