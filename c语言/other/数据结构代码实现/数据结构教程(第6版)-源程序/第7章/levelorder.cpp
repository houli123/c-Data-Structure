//��α����㷨
#include "btree.cpp"
#define MaxSize 100
//--------------------------------------------------------
//--ѭ�����л��������㷨----------------------------------
//--------------------------------------------------------
typedef struct 
{	BTNode *data[MaxSize];				//��Ŷ���Ԫ��
	int front,rear;						//��ͷ�Ͷ�βָ��
} SqQueue;								//˳�������
void InitQueue(SqQueue *&q)				//��ʼ������
{	q=(SqQueue *)malloc (sizeof(SqQueue));
	q->front=q->rear=0;
}
void DestroyQueue(SqQueue *&q)			//���ٶ���
{
	free(q);
}
bool QueueEmpty(SqQueue *q)				//�ж϶����Ƿ�Ϊ��
{
	return(q->front==q->rear);
}
bool enQueue(SqQueue *&q,BTNode *e)		//������
{	if ((q->rear+1)%MaxSize==q->front)	//���������
		return false;
	q->rear=(q->rear+1)%MaxSize;
	q->data[q->rear]=e;
	return true;
}
int Count(SqQueue *&q)					//������е�Ԫ�ظ��� 
{
	return (q->rear-q->front+MaxSize)%MaxSize;
}
bool deQueue(SqQueue *&q,BTNode *&e)	//������
{	if (q->front==q->rear)				//�ӿ������
		return false;
	q->front=(q->front+1)%MaxSize;
	e=q->data[q->front];
	return true;
}
//--------------------------------------------------------

//������α����㷨
void LevelOrder(BTNode *b)			//������α����㷨 
{
	BTNode *p;
	SqQueue *qu;
	InitQueue(qu);					//��ʼ������
	enQueue(qu,b);					//�����ָ��������
	while (!QueueEmpty(qu))			//�Ӳ�Ϊ��ѭ��
	{
		deQueue(qu,p);				//���ӽ��p
		printf("%c ",p->data);		//���ʽ��p
		if (p->lchild!=NULL)		//������ʱ�������
			enQueue(qu,p->lchild);
		if (p->rchild!=NULL)		//���Һ���ʱ�������
			enQueue(qu,p->rchild);
	} 
}

//�ֲ�εĲ�α����㷨
void LevelOrder1(BTNode *b)			//�ֲ�εĲ�α����㷨 
{
	BTNode *p;
	SqQueue *qu;
	InitQueue(qu);					//��ʼ������
	int curl=1;						//��ʾ��ǰ���(��ʼ��Ϊ1) 
	enQueue(qu,b);					//�����ָ��������
	while (!QueueEmpty(qu))			//�Ӳ�Ϊ��ѭ��
	{
		printf("��%d��: ",curl); 
		int cnt=Count(qu);		//��ǰ��εĽ�����
		for(int i=0;i<cnt;i++)		//ѭ��cnt�η��ʵ�ǰ���ȫ����� 
		{ 
			deQueue(qu,p);				//���ӽ��p
			printf("%c ",p->data);		//���ʽ��p
			if (p->lchild!=NULL)		//������ʱ�������
				enQueue(qu,p->lchild);
			if (p->rchild!=NULL)		//���Һ���ʱ�������
				enQueue(qu,p->rchild);
		}
		curl++;
		printf("\n"); 
	} 
}

int main()
{
	BTNode *b;
	CreateBTree(b,"A(B(D(,G)),C(E,F))");
	printf("b:");DispBTree(b);printf("\n");
	printf("������α�������:");LevelOrder(b);printf("\n");
	printf("�ֲ�εĲ�α���:\n");LevelOrder1(b);printf("\n");
	DestroyBTree(b);
	return 1;
}
