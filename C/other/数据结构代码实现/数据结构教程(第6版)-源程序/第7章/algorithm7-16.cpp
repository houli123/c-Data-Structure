//����7.16�����㷨�������������ֵΪx�Ľڵ���������ȡ�
#include "btree.cpp"
bool ancestor(BTNode *b,ElemType x)
{
	if (b==NULL)
		return false;
	else if (b->lchild!=NULL && b->lchild->data==x || b->rchild!=NULL && b->rchild->data==x)
	{
		printf("%c ",b->data);
		return true;
	}
	else if (ancestor(b->lchild,x) || ancestor(b->rchild,x))
	{
		printf("%c ",b->data);
		return true;
	}
	else
		return false;
}
bool ancestor1(BTNode *b,ElemType x,ElemType path[],int d)
{
	bool find;
	if (b==NULL)				//��������false
		return false;
	d++; path[d]=b->data;		//��ǰ������path
	if (b->data==x)				//��ǰ���ֵΪx�����
	{
		for (int i=0;i<d;i++)
			printf("%c ",path[i]);
		printf("\n");
		return true;
	}
	find=ancestor1(b->lchild,x,path,d);	//���������в���
	if (find)							//�������гɹ��ҵ�
		return true;
	else				//��������û���ҵ������������в���
		return ancestor1(b->rchild,x,path,d);
}
void main()
{
	BTNode *b;
	ElemType x='G';
	CreateBTree(b,"A(B(D(,G)),C(E,F))");
	printf("b:");DispBTree(b);printf("\n");
	ElemType path[100];
	int d=-1;
	printf("���%c����������:",x);
	ancestor1(b,x,path,d);
	DestroyBTree(b);
}
