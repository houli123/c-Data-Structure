//����7.18�����㷨�����ò�α�����������Ӹ��ڵ㵽ÿ��Ҷ�ӽ���·��������
#include "btree.cpp"
#define MaxSize 100

//----------------------------------------------------------
//-�ǻ��ζ��еĻ��������㷨---------------------------------
//----------------------------------------------------------
typedef struct snode
{
	BTNode *p;						//��ŵ�ǰ���ָ��
	int parent;						//���˫�׽���ڶ����е�λ��
} NodeType;							//�ǻ��ζ���Ԫ������

typedef struct
{
	NodeType data[MaxSize];			//��Ŷ���Ԫ��
	int front,rear;					//��ͷָ��Ͷ�βָ��
} QuType;							//˳�������


void InitQueue(QuType *&q)			//��ʼ������
{	q=(QuType *)malloc (sizeof(QuType));
	q->front=q->rear=-1;
}
void DestroyQueue(QuType *&q)		//���ٶ���
{
	free(q);
}
bool QueueEmpty(QuType *q)			//�ж϶����Ƿ�Ϊ��
{
	return(q->front==q->rear);
}
bool enQueue(QuType *&q,NodeType e)	//������
{	if (q->rear==MaxSize-1)			//���������
		return false;				//���ؼ�
	q->rear++;						//��β��1
	q->data[q->rear]=e;				//rearλ�ò���Ԫ��e
	return true;					//������
}
bool deQueue(QuType *&q,NodeType &e) //������
{	if (q->front==q->rear)			//�ӿ������
		return false;
	q->front++;
	e=q->data[q->front];
	return true;
}
//----------------------------------------------------------
void AllPath2(BTNode *b)
{
	int k;
	BTNode *p;
	NodeType e;
	QuType *qu;							//����Ƿǻ��ζ���ָ��
	InitQueue(qu);						//��ʼ������
	e.p=b; e.parent=-1;		//����������Ӧ�Ķ���Ԫ��
	enQueue(qu,e);					//��������
	while (!QueueEmpty(qu))				//�Ӳ���ѭ��
	{
		deQueue(qu,e);				//����Ԫ��e,���ڶ����±�Ϊqu->front
		p=e.p;						//ȡԪ��e�Ľ��p
		if (p->lchild==NULL && p->rchild==NULL)	//���pΪҶ�ӽ��
		{
			k=qu->front;				//������p��������·��������
			while (qu->data[k].parent!=-1)
			{
				printf("%c->",qu->data[k].p->data);
				k=qu->data[k].parent;
			}
			printf("%c\n",qu->data[k].p->data);
		}
		if (p->lchild!=NULL)			//���p������
		{
			e.p=p->lchild;			//�������p�����Ӷ�Ӧ�Ķ���Ԫ��
			e.parent=qu->front;		//���p�����ӵ�˫��λ��Ϊqu->front
			enQueue(qu,e);			//���p�����ӽ���
		}
		if (p->rchild!=NULL)			//���p���Һ���
		{
			e.p=p->rchild;			//�������p���Һ��Ӷ�Ӧ�Ķ���Ԫ��
			e.parent=qu->front;		//���p���Һ��ӵ�˫��λ��Ϊqu->front
			enQueue(qu,e);			//���p���Һ��ӽ���
		}
	}
}

int main()
{
	BTNode *b;
	CreateBTree(b,"A(B(D(,G)),C(E,F))");
	printf("b:");DispBTree(b);printf("\n");
	printf("�Ӹ���㵽ÿ��Ҷ�ӽ���·��������:\n");
	AllPath2(b);
	DestroyBTree(b);
	return 1;
}
