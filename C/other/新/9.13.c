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
	printf("���������֣�");
	scanf("%d",&inum);
	for(i=0;i<inum;i++){
		front=(struct node *)malloc(sizeof(struct node));   //����malloc����ռ���׵�ַָ�����front�У�����front���׵�ַ����ͷָ��ĵ�ַ���������ᵱǰ��ָ����
		if(i==0)
			Head=front;  //����ǵ�һ����㣬���ͷָ��ָ���һ�����
		else
			back->next=front;  //����һֱ���ӵ���������Ϊֹ
			
		//�����������Ȱ������ָ�������úã�����������������
			
		scanf("%d%s%s",&front->iorder,front->cname,front->ctel);
		front->next=NULL;  //ָ����Ϊ�գ�����������create���
		back=front;  //ʹbackָ�����һ����㣬back�൱�ڵ�ǰ�ڵ㣿
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

int main(){
	fnCreate();
	fnprint();
}
