//����7.19�����㷨������������˳��洢�ṹת���ɶ������洢�ṹ
#include "btree.cpp"
typedef char Elemtype;
typedef ElemType SqBTree[MaxSize];
BTNode *trans(SqBTree a,int i)
{
	BTNode *b;
	if (i>MaxSize)
		return(NULL);
	if (a[i]=='#')	return(NULL);			//���ڵ㲻����ʱ����NULL
	b=(BTNode *)malloc(sizeof(BTNode));	//�������ڵ�
	b->data=a[i];
	b->lchild=trans(a,2*i);					//�ݹ鴴��������
	b->rchild=trans(a,2*i+1);				//�ݹ鴴��������
	return(b);								//���ظ��ڵ�
}
void trans1(BTNode *b,SqBTree a,int i)
{
   if (b!=NULL)
   {  a[i]=b->data;					//���������
      trans1(b->lchild,a,2*i);		//�ݹ鴴��������
      trans1(b->rchild,a,2*i+1);	//�ݹ鴴��������
   }
}
void main()
{
	BTNode *b;
	CreateBTree(b,"A(B(D),C(E,F))");
	printf("b: ");DispBTree(b);printf("\n");
	SqBTree a;
	for (int i=1;i<30;i++) a[i]='#';
	trans1(b,a,1);
	printf("a: ");
	for (int j=1;j<30;j++)
		printf("%c",a[j]);
	printf("\n");
	DestroyBTree(b);
}
