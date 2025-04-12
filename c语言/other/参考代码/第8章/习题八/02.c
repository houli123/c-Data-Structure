#include <stdio.h> 

struct library{
	char cname[15],canthor[15],cpublic[20];
	int iprice,irent;
};

int main(){
	int inum,i;
	printf("请输入要录入多少本书：");
	scanf("%d",&inum);
	struct library book[inum];
	printf("请按顺序分别输入每本书的书名、单价、作者、出版社、借阅量：\n");
	for(i=0;i<inum;i++){
		scanf("%s%d%s%s%d",book[i].cname,&book[i].iprice,book[i].canthor,book[i].cpublic,&book[i].irent);	
	}	
	for(i=0;i<inum;i++){
		printf("书名：%s 单价：%d 作者：%s 出版社：%s 借阅量：%d\n",book[i].cname,book[i].iprice,book[i].canthor,book[i].cpublic,book[i].irent);
	}	
    return 0;
}
