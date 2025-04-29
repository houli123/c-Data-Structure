#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100

//��ͨ�Ļ��ζ���
typedef int elemtype;
typedef struct{
	elemtype data[Maxsize];
	int rear,front;  //ͷָ���βָ����±�
}SqQueue;
void initQueue(SqQueue *&q){
	q=(SqQueue *)malloc(sizeof(SqQueue));
	q->rear=q->front=0;
}
void destroyQueue(SqQueue *&q){
	free(q);
}
bool emptyQueue(SqQueue *q){
	return q->front==q->rear;
}
bool enQueue(SqQueue *&q,elemtype e){
	//���ж��Ƿ����
	if((q->rear+1)%Maxsize==q->front)
		return false;
	q->rear=(q->rear+1)%Maxsize;
	q->data[q->rear]=e;
	return true;
}
bool deQueue(SqQueue *&q,elemtype &e){
	//���ж϶��Ƿ�Ϊ��
	if(q->rear==q->front)
		return false;
//ע������˳�����ӳ��Ӷ����ȶ�ָ���Ԫ��
//��ջ����ջ�ȶ�ָ�룬��ջ�ȶ�Ԫ��
	q->front=(q->front+1)%Maxsize;
	e=q->data[q->front];
	return true;
}
void dispQueue(SqQueue *q){
	while(q->rear!=q->front){
		q->front++; 
		printf("%d,",q->data[q->front]);
	}
}



//ֻ֪����ͷָ�뼰Ԫ�ظ����Ļ��ζ���
typedef struct{
	elemtype data[Maxsize];
	int front,count;
}SqQueue2;
void initQueue2(SqQueue2 *&q){
	q=(SqQueue2 *)malloc(sizeof(SqQueue2));
	q->front=q->count=0;
}
bool emptyqueue2(SqQueue2 *q){
	return (q->count==0);
}
bool enqueue2(SqQueue2 *&q,elemtype e){
	if(q->count==Maxsize)
		return false;
	//�����βԪ��
	int rear=(q->front+q->count)%Maxsize;
	rear=(rear+1)%Maxsize;
	q->data[rear]=e;
	q->count++;
	return true;
}
bool deQueue2(SqQueue2 *&q,elemtype e){
	if(q->count==0)
		return false;
	q->front=(q->front+1)%Maxsize;
	e=q->data[q->front];
	q->count--;
	return true;
}


//��n����վ��һ�ţ��������ұ�ŷֱ���1-n�����ڴ������ұ���1��2��1��2.��������1�ĳ��У�����2������վ�������Ҷˡ�ֱ��n���˶�����Ϊֹ
void number(int n){
	int i;elemtype e;
	SqQueue *q;
	initQueue(q);
	for(i=1;i<=n;i++){
		enQueue(q,i);	
	}
	printf("��������˳��");
	while(!emptyQueue(q)){
		//һ��ɾ��������һ�����൱��ÿ��ɾһ������ôֻ��Ҫִ��n�ξ���ȫ��ɾ�꣬��ʱemptyqueueΪ1����ѭ��
		deQueue(q,e);
		printf("%d ",e);
		if(!emptyQueue(q)){
			deQueue(q,e);
			enQueue(q,e);			
		}
	}
	printf("\n");
	destroyQueue(q);
}


//˫�˻��ζ��еĲ���
//˫�˻��ζ��дӶ�βɾ������
bool dequeue3(SqQueue *&q,elemtype e){
	if(q->front==q->rear)
		return false;
	e=q->data[q->rear];
	q->rear=(q->rear-1+Maxsize)%Maxsize;
	return true;
}
//�Ӷ�ͷ��������
bool enqueue3(SqQueue *&q,elemtype e){
	if(q->front==(q->rear+1)%Maxsize)
		return false;
	q->data[q->front]=e;
	q->front=(q->front-1+Maxsize)%Maxsize;
	return true;
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
	
	//ʵ�ֱ�������
	int i,n=8;
	printf("��ʼ���У�");
	for(i=1;i<=n;i++){
		printf("%d ",i);
	}
	printf("\n");
	number(n);
	
    return 0;
}
