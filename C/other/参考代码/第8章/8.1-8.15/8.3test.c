#include <stdio.h> 
struct new_book{
	char cname[30],canthor[10],cpublish[30];
	float fprice;
}newbook;
int main()
{
	printf("请分别输入新书的书名、作者、单价和出版社：");
	scanf("%s%s%f%s",newbook.cname, newbook.canthor, &newbook.fprice, newbook.cpublish);
	printf("新书为《%s》，作者是：%s，单价为：%.1f，出版社为：%s",newbook.cname, newbook.canthor, newbook.fprice, newbook.cpublish);
    return 0;
}
