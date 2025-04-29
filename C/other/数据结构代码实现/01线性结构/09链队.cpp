#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
#define Maxsize 100

//����������
typedef int elemtype;
//���嵥����Ľṹ
typedef struct qnode{
	elemtype data;
	struct qnode *next;
}Datanode;  //��ʾ��������
//�������ӵĽṹ
typedef struct{
	Datanode *front;
	Datanode *rear;
}LinkquNode;  //��ʾ���������ӽ��

//���ӵ�ʵ�־��ǣ������β�巨���뵥�����β
//���Ӿ��ǰ�ͷ�ڵ�ĺ�һλ�õ����ͷſռ䣬��ʹͷ�ڵ�ָ��ͷ�ڵ����λ


//���ݲ�������ʼ�������١��жϿա����ӡ�����
void initqueue(LinkquNode *&q){
	q=(LinkquNode *)malloc(sizeof(LinkquNode));
	q->rear=q->front=NULL;
}
bool emptyqueue(LinkquNode *q){
	return q->rear==NULL;
}
void enqueue(LinkquNode *&q,elemtype e){
	Datanode *p;
	p=(Datanode *)malloc(sizeof(Datanode));
	p->data=e;
	p->next=NULL;
	if(q->rear==NULL){
		q->front=q->rear=p;
	}
	else{
		q->rear->next=p;
		q->rear=p;
	}
}
bool dequeue(LinkquNode *&q,elemtype &e){
	Datanode *p=q->front;
	if(p==NULL)
		return false;
	if(q->front==q->rear)  //�����н���һ�����ݽ��ʱ
		q->front=q->rear=NULL;
	else  //�����������
		q->front=p->next;
	e=p->data;
	free(p);
	return true;
}
void destroyqueue(LinkquNode *&q){
	//���ﶨ����ǵ������еĵ�����㣬����������data��next
	Datanode *pre=q->front,*p; //preָ����׽��
	while(pre!=NULL){
		p=pre;
		pre=pre->next;
		free(p);
	}
	free(q);
//������ôд����֪��Ϊʲôд��ô����
//	if(pre!=NULL){
//		p=pre->next;
//		while(p!=NULL){
//			free(pre);
//			pre=p;
//			p=p->next;
//		}
//		free(pre);
//	}
//	free(q);
}
void dispqueue(LinkquNode *q){
	Datanode *p=q->front;
	while(p!=NULL){
		printf("%d,",p->data);
		p=p->next;
	}
}



//����һ������ͷ���ֻ��һ��βָ��rear��ѭ����������ʵ�����ӣ���Ƴ�ʼ�������ӡ����Ӳ���
typedef int elemtype;
//���嵥����Ľṹ
typedef struct node{
	elemtype data;
	struct node *next;
}LinkNode;  

//ֻ����βָ��
void initqueue1(LinkNode *&rear){
	rear=NULL;
}
void enqueue1(LinkNode *&rear,elemtype e){
	LinkNode *p;
	p=(LinkNode *)malloc(sizeof(LinkNode));
	p->data=e;
	if(rear==NULL){
		p->next=p;  //ʹ����ѭ������
		rear=p;
	}
	else{
		p->next=NULL;
		rear->next=p;
		rear=p;
	}
}
bool dequeue1(LinkNode *&rear,elemtype &e){
	LinkNode *p=rear->next;
	if(rear==NULL)
		return false;
	if(rear->next==rear){  //�����н���һ�����ݽ��ʱ
		e=rear->data;
		free(rear);
		rear=NULL;
	}
	else  //�����������
	{
		e=p->data;
		rear->next=p->next;
		free(p);
	}
	return true;
}



int main(){
	elemtype e=1;
	LinkquNode *q;
	initqueue(q);
	for(int i=0;i<Maxsize;i++)
		enqueue(q,i);
	dequeue(q,e);   //0���Ƚ�ȥ�������ȳ���
	printf("%d\n",emptyqueue(q));  
	dispqueue(q);
	destroyqueue(q); //�������ٺ󣬲����ٶԸö��н��в���
	return 0;
}
