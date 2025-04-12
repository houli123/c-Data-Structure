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
	printf("������Ҫ�����ĸ�����");
	scanf("%d",&inum);
	for(i=0;i<inum;i++){
		front=(struct node *)malloc(sizeof(struct node));   //����һ��ָ������ڴ������ָ�����front�У�����front���׵�ַ����ͷָ��ĵ�ַ���������ᵱǰ��ָ����
		if(i==0)
			Head=front;  //����ǵ�һ����㣬���ͷָ��ָ���һ�����
		else
			back->next=front;  //����һֱ���ӵ���������Ϊֹ
			
		//�����������Ȱ������ָ����ȫ�������úã�����������������
		printf("��ֱ�����ѧ����š��������绰��");
		scanf("%d%s%s",&front->iorder,front->cname,front->ctel);
		front->next=NULL;  //ָ����Ϊ�գ�����������create���
		back=front;  //ʹbackָ�����һ�����
	}
}

void fnprint(){
	struct node *front;
	front=Head;  //��Ϊͷָ���Ѿ����ˣ�����䶯ͷָ�룬��ֱ�Ӱ�ͷָ���Ŀǰ��ָ��
	while(front!=NULL){  //����������һ����㣬�����
		printf("\nID��%d��name��%s��tel��%s",front->iorder,front->cname,front->ctel);
		front=front->next;  //ָ����һ��ָ��
	}
}

void fnDelete(int iNO){
	struct node *front,*back,*temp=NULL;
	front=back=Head;
	while(front!=NULL){  // ������ҽڵ㣬ֱ��β�ڵ�
		if(front->iorder==iNO){  //���ҳɹ�
			back=front->next;
			temp=front;  // ������ɾ���Ľڵ�ĵ�ַ
			break;   //��ֹѭ������������
		}
		back=front;  //ʹָ��ָ��ǰ�ĵ�ַ
		front=front->next;  //ʹ��ǰ�ڵ�ָ����һ���ڵ�
	}	
	if(temp==Head)
		Head=back;   //���ɾ�����ǵ�һ���ڵ�
	if(temp==NULL)
		printf("not found");
	else free(temp);
}

void fninsert(){  
    struct node *newnode,*curnode;  
    int inorder;  
    char cname[15],ctel[15];  
    int pos;  
    printf("������Ҫ�����λ�ã�");  
    scanf("%d",&pos);  
    // �����½ڵ�  
    newnode=(struct node *)malloc(sizeof(struct node));  
    printf("������Ҫ��������ݣ�\nID��");  
    scanf("%d",&newnode->iorder);  
    printf("Name��");  
    scanf("%s",newnode->cname);  
    printf("Tel��");  
    scanf("%s",newnode->ctel);  
    newnode->next=NULL;  
    // �ҵ�Ҫ�����λ��  
    curnode=Head;  
    int i=1;  
    while(curnode!=NULL && i<pos-1){  
        curnode=curnode->next;  
        i++;  
    }  
    // �����½ڵ�  
    newnode->next=curnode->next;  
    curnode->next=newnode;  
}

int main(){
	int iNO,i;
	while(1){
		//clrscr();
		printf("\n\n 1--add 2--del 3--print 4--insert 5--exit\n");
		printf("\n\nselect opetion(0--5)��");
		scanf("%d",&i);
		if(i==5)
			break;
		switch(i){
			case 1:
				fnCreate();
				break;
			case 2:
				printf("������Ҫɾ������ţ�");
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
