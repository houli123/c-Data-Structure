#include "bTree.cpp"		//�����������Ļ������㺯��
BTNode* firstk1(BTNode*b,int level,int k)
{
	if(b==NULL)
		return NULL;		//��������NULL 
	if (level==k)				//�ҵ�ֵΪx�Ľ��b��������˫��
		return b;
	BTNode*left=firstk1(b->lchild,level+1,k);	//���������еݹ���� 
	if(left!=NULL)						//�����������ҵ�ֵΪx�Ľ�� 
		return left;					//������˫��
	else								//����������û���ҵ�ֵΪx�Ľ��
		return firstk1(b->rchild,level+1,k); //�������������в��ҵĽ�� 
}
	
	
BTNode* firstk(BTNode*b,int k)
{
	return firstk1(b,1,k);
}


void Output(BTNode *b)	//�����������н��
{  BTNode *Qu[MaxSize];	//����ѭ������
   int front,rear;		//�����ͷ�Ͷ�βָ��
   int last;			//���嵱ǰ�������ҽ���ڶ����е�λ��
   front=rear=0;		//�ö���Ϊ�ն���
   rear++;			//��������
   last=rear;			//��1������ҽ���ڶ����е�λ��Ϊ1
   Qu[rear]=b;
  while (rear!=front)			//���в�Ϊ��ʱѭ��
  {  front=(front+1)%MaxSize;
     b=Qu[front];			//����һ�����b
     printf("  %c",b->data);
     if (b->lchild!=NULL) 		//���ӽ���
     {  rear=(rear+1)%MaxSize;
        Qu[rear]=b->lchild;
     }
     if (b->rchild!=NULL) 		//�Һ��ӽ���
     {  rear=(rear+1)%MaxSize;
        Qu[rear]=b->rchild;
     }
     if (front==last)		//��ǰ������н�㴦�����
     {  printf("\n");		//���н�����һ�������
        last=rear;		//��lastָ����һ������ҽ���ڶ����е�λ��
     }
  }
}

bool brother(BTNode *b,char x,char y)
{
	if(b==NULL) return false;
	if(b->lchild!=NULL && b->rchild!=NULL)		//���b�������Һ���
	{	if((b->lchild->data==x && b->rchild->data==y) ||
				(b->lchild->data==y && b->rchild->data==x))
			return true;
	}
	if(brother(b->lchild,x,y))
		return true;
	else
		return brother(b->rchild,x,y);
}

void MaxPath(BTNode *b,ElemType maxpath[],int &maxpathlen) //������·����maxpath[maxpathlen-1]
{	//maxpathlen�ĳ�ֵΪ0
	struct snode
	{	BTNode *node;					//��ŵ�ǰ���ָ��
		int parent;					//���˫�׽���ڶ����е�λ��
	} Qu[MaxSize];					//����ǻ��ζ���
	ElemType path[MaxSize];				//���һ��·��
	int pathlen;						//���һ��·������
	int front,rear,p,i;				//�����ͷ�Ͷ�βָ��
	front=rear=-1;					//�ö���Ϊ�ն���
	rear++;
	Qu[rear].node=b;					//�����ָ�������
	Qu[rear].parent=-1;				//�����û��˫�׽��
	while (front<rear)					//���в�Ϊ��
	{	front++; b=Qu[front].node;		//��ͷ������
		if (b->lchild==NULL && b->rchild==NULL) //bΪҶ�ӽ��
		{	p=front;	pathlen=0;
			while (Qu[p].parent!=-1)
			{	path[pathlen]=Qu[p].node->data;
				pathlen++;
				p=Qu[p].parent;
			}
			path[pathlen]=Qu[p].node->data;
			pathlen++;
			if (pathlen>maxpathlen)		//ͨ���Ƚ����·��
			{	for (i=0;i<pathlen;i++)
					maxpath[i]=path[i];
				maxpathlen=pathlen;
			}
		}
		if (b->lchild!=NULL)			//���ӽ�����
		{	rear++;
			Qu[rear].node=b->lchild;
			Qu[rear].parent=front;
		}
		if (b->rchild!=NULL)			//�Һ��ӽ�����
		{	rear++;
			Qu[rear].node=b->rchild;
			Qu[rear].parent=front;
		}
	}
}

int main()
{
	BTNode *b;
	CreateBTree(b,"A(B(D(,G)),C(E,F))");
	printf("b:");DispBTree(b);printf("\n");
	char maxpath[MaxSize];
	int maxpathlen=0;
	MaxPath(b,maxpath,maxpathlen);
	printf("ans: ");
	for(int i=0;i<maxpathlen;i++)
		printf("%c ",maxpath[i]);
	printf("\n");
	DestroyBTree(b);
	return 0;
}
