#include <stdlib.h>
#include <malloc.h>

struct node{
	int iorder;
	char cname[15];char ctel[15];
	struct node *next;
}*Head;

void fnCreate(){
	struct node *front,*back;
	int i,inum;
	printf("请输入数字：");
	scanf("%d",&inum);
	for(i=0;i<inum;i++){
		front=(struct node *)malloc(sizeof(struct node));   //返回malloc分配空间的首地址指针存入front中，其中front的首地址就是头指针的地址，可以理解会当前的指针域
		if(i==0)
			Head=front;  //如果是第一个结点，则给头指针指向第一个结点
		else
			back->next=front;  //否则一直链接到链表的最后为止
			
		//上述步骤是先把链表的指针域设置好，下面是设置数据域
			
		scanf("%d%s%s",&front->iorder,front->cname,front->ctel);
		front->next=NULL;  //指针域赋为空，代表本次输入create完成
		back=front;  //使back指向最后一个结点，back相当于当前节点？
	}
}

void fnprint(){
	struct node *front;
	front=Head;  //因为头指针已经有了，不会变动头指针，那直接把头指针给目前的指针
	while(front!=NULL){  //如果不是最后一个结点，则输出
		printf("\nID：%d，name：%s，tel：%s",front->iorder,front->cname,front->ctel);
		front=front->next;  //指向下一个指针
	}
}

int main(){
	fnCreate();
	fnprint();
}
