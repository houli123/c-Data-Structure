#include <stdio.h>
#include <malloc.h>
#include <conio.h>

struct node{
	int iorder;
	char cname[15];char ctel[15];
	struct node *next;
}*Head;

void fnCreate(){
	struct node *front,*back;
	int i,inum;
	printf("请输入要创建的个数：");
	scanf("%d",&inum);
	for(i=0;i<inum;i++){
		front=(struct node *)malloc(sizeof(struct node));   //返回一个指向分配内存区域的指针存入front中，其中front的首地址就是头指针的地址，可以理解会当前的指针域
		if(i==0)
			Head=front;  //如果是第一个结点，则给头指针指向第一个结点
		else
			back->next=front;  //否则一直链接到链表的最后为止
			
		//上述步骤是先把链表的指针域全部都设置好，下面是设置数据域
		printf("请分别输入学生序号、姓名、电话：");
		scanf("%d%s%s",&front->iorder,front->cname,front->ctel);
		front->next=NULL;  //指针域赋为空，代表本次输入create完成
		back=front;  //使back指向最后一个结点
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

void fnDelete(int iNO){
	struct node *front,*back,*temp=NULL;
	front=back=Head;
	while(front!=NULL){  // 逐个查找节点，直至尾节点
		if(front->iorder==iNO){  //查找成功
			back=front->next;
			temp=front;  // 保留待删除的节点的地址
			break;   //终止循环，结束查找
		}
		back=front;  //使指针指向当前的地址
		front=front->next;  //使当前节点指向下一个节点
	}	
	if(temp==Head)
		Head=back;   //如果删除的是第一个节点
	if(temp==NULL)
		printf("not found");
	else free(temp);
}

void fninsert(){  
    struct node *newnode,*curnode;  
    int inorder;  
    char cname[15],ctel[15];  
    int pos;  
    printf("请输入要插入的位置：");  
    scanf("%d",&pos);  
    // 创建新节点  
    newnode=(struct node *)malloc(sizeof(struct node));  
    printf("请输入要插入的数据：\nID：");  
    scanf("%d",&newnode->iorder);  
    printf("Name：");  
    scanf("%s",newnode->cname);  
    printf("Tel：");  
    scanf("%s",newnode->ctel);  
    newnode->next=NULL;  
    // 找到要插入的位置  
    curnode=Head;  
    int i=1;  
    while(curnode!=NULL && i<pos-1){  
        curnode=curnode->next;  
        i++;  
    }  
    // 插入新节点  
    newnode->next=curnode->next;  
    curnode->next=newnode;  
}

int main(){
	int iNO,i;
	while(1){
		//clrscr();
		printf("\n\n 1--add 2--del 3--print 4--insert 5--exit\n");
		printf("\n\nselect opetion(0--5)：");
		scanf("%d",&i);
		if(i==5)
			break;
		switch(i){
			case 1:
				fnCreate();
				break;
			case 2:
				printf("请输入要删除的序号：");
				scanf("%d",&iNO);
				fnDelete(iNO);
				break;
			case 3:
				fnprint();
				break;
			case 4:
				fninsert();
				break;
			default:
				break;
		}
	}
}
