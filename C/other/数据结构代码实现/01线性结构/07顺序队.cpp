#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100

typedef int elemtype;
typedef struct{
	elemtype data[Maxsize];
	int rear,front;  //ͷָ���βָ����±�
}SqQueue;


void initQueue(SqQueue *&q){
	q=(SqQueue *)malloc(sizeof(SqQueue));
	q->rear=q->front=-1;
}
void destroyQueue(SqQueue *&q){
	free(q);
}
bool emptyQueue(SqQueue *q){
	return q->front==q->rear;
}
bool enQueue(SqQueue *&q,elemtype e){
	//���ж��Ƿ����
	if(q->rear==Maxsize-1)
		return false;
	q->rear++;
	q->data[q->rear]=e;
	//�ȼ���q->data[++q->rear]=e
	return true;
}
bool deQueue(SqQueue *&q,elemtype &e){
	//���ж϶��Ƿ�Ϊ��
	if(q->rear==q->front)
		return false;
	e=q->data[++q->front];
//ע������˳�����ӳ��Ӷ����ȶ�ָ���Ԫ��
//��ջ����ջ�ȶ�ָ�룬��ջ�ȶ�Ԫ��
	//q->front++;
	//e=q->data[q->front];
	return true;
}
void dispQueue(SqQueue *q){
	while(q->rear!=q->front){
		q->front++; 
		printf("%d,",q->data[q->front]);
	}
}


int main(){
	elemtype a[]={1,2,3,4,5,6,7,8,9,10};
	SqQueue *q;
	initQueue(q);
	for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
		enQueue(q,a[i]);
	dispQueue(q);
	destroyQueue(q);
	printf("\n%d",emptyQueue(q));
    return 0;
}
