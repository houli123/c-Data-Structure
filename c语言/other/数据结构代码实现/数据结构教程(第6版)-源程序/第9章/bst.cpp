//�����������㷨
#include <stdio.h>
#include <malloc.h>
typedef int KeyType;
typedef char InfoType[10];
typedef struct node
{
	KeyType key;              		//�ؼ�����
	InfoType data;             		//����������
	struct node *lchild,*rchild;	//���Һ���ָ��
} BSTNode;           				//�����������������
BSTNode* InsertBST(BSTNode* bt,KeyType k)	//�ڶ���������bt�в���һ���ؼ���Ϊk�Ľ��
{	if (bt==NULL)								//ԭ��Ϊ��
	{	bt=(BSTNode *)malloc(sizeof(BSTNode));	//�½������bt 
		bt->key=k; bt->lchild=bt->rchild=NULL;
	}
	else if (k<bt->key) 
		bt->lchild=InsertBST(bt->lchild,k);	//���뵽��������
	else if(k>bt->key)
		bt->rchild=InsertBST(bt->rchild,k);	//���뵽��������
	return bt;								//���ز��������������ĸ���� 
}

BSTNode *CreateBST(KeyType A[],int n)	//��������������
//����BST�������ָ��
{	BSTNode *bt=NULL;				//��ʼʱbtΪ����
	int i=0;
	while (i<n)
	{	bt=InsertBST(bt,A[i]);			//���ؼ���A[i]�������������bt��
		i++;
	}
	return bt;						//���ؽ����Ķ����������ĸ�ָ��
}

void DispBST(BSTNode *bt)		//���һ�����������
{
	if (bt!=NULL)
	{	printf("%d",bt->key);
		if (bt->lchild!=NULL || bt->rchild!=NULL)
		{	printf("(");						//�к��ӽ��ʱ�����(
			DispBST(bt->lchild);				//�ݹ鴦��������
			if (bt->rchild!=NULL) printf(",");	//���Һ��ӽ��ʱ�����,
			DispBST(bt->rchild);				//�ݹ鴦��������
			printf(")");						//�к��ӽ��ʱ�����)
		}
	}
}
BSTNode *SearchBST(BSTNode *bt,KeyType k)	//�ݹ��㷨���ڶ���������bt�в��ҹؼ���Ϊk�Ľ��
{ 
    if (bt==NULL || bt->key==k)      	//�ݹ��ս�����
		return bt;
	if (k<bt->key)
       	return SearchBST(bt->lchild,k);  //���������еݹ����
    else
     	return SearchBST(bt->rchild,k);  //���������еݹ����
}
BSTNode *SearchBST1(BSTNode *bt,KeyType k)	//�ǵݹ��㷨���ڶ���������bt�в��ҹؼ���Ϊk�Ľ��
{ 
	BSTNode* p=bt;
	while(p!=NULL)
    { 	if(p->key==k) break;                 //�ҵ��ؼ���Ϊk�Ľ��p
        else if(k<p->key)
			p=p->lchild;
        else
			p=p->rchild;
    }
    return p;
}

BSTNode *DeleteBST(BSTNode *bt,KeyType k)	//��bt��ɾ���ؼ���Ϊk�Ľ��
{	if(bt==NULL) return bt;
    BSTNode* p=bt,*f=NULL;      			//fָ��ɾ���p��˫�׽��
    while(p!=NULL)                          //���ұ�ɾ���p����˫����f��� 
    {
	 	if(p->key==k) break;                 //�ҵ���ɾ���pʱ�˳�ѭ��
    	f=p;
        if(k<p->key)
			p=p->lchild;
        else
			p=p->rchild;
    }
    if(p==NULL) return bt;                        //û���ҵ���ɾ�����p������bt
    if(p->lchild==NULL && p->rchild==NULL)     		//���(1)-���p��Ҷ�ӽ��
    {	if(p==bt)                                   //���p�Ǹ����
        	bt=NULL;
    	else                                        //���p���Ǹ����
        {	if(f->lchild==p)						//���p�ǽ��f������ 
				f->lchild=NULL;
            else									//���p�ǽ��f���Һ���
				f->rchild=NULL;
    	}
        free(p);
	}
    else if(p->rchild==NULL)                           //���(2)-���p��������Ϊ��
    {
    	if(f==NULL)	 
	    	bt=bt->lchild;                       		//���p�Ǹ����bt�������������bt 
    	else                        				//���p����˫��f��p���Ǹ���㣩 
        {	if(f->lchild==p)							//���p�ǽ��f������ 
				f->lchild=p->lchild;					//�ý��p������������p 
            else										//���p�ǽ��f���Һ���
				f->rchild=p->lchild;					//�ý��p������������p
    	}
    	free(p);
	}
    else if (p->lchild==NULL)                            //���(3)-���p��������Ϊ��
    {
    	if(f==NULL)
	        bt=bt->rchild;                  			//���p�Ǹ����bt�������Һ������bt
		else                        				//���p����˫��f��p���Ǹ���㣩
        {	if(f->lchild==p)							//���p�ǽ��f������ 
				f->lchild=p->rchild;					//�ý��p���Һ���������p
            else										//���p�ǽ��f���Һ���
				f->rchild=p->rchild;					//�ý��p���Һ���������p
    	}
        free(p);
	}
    else                                                  //���(4)-���p�����Һ��ӵ����
    {	BSTNode* q=p->lchild;                				//qָ����p�����ӽ��
        f=p;                               					//fָ����q��˫�׽��
        while(q->rchild!=NULL)                   			//�ҵ����p�����ӵ������½��q
        {	f=q;
            q=q->rchild;
    	}
        p->key=q->key;                  		     	//�����p��ֵ�ý��q��ֵ�滻
        if(q==f->lchild)								//ɾ�����q(�ý��q������������q)
			f->lchild=q->lchild;           
        else
			f->rchild=q->lchild;
        free(q);
    }
    return bt;
}

void DestroyBST(BSTNode *&bt)		//���ٶ���������bt
{
	if (bt!=NULL)
	{
		DestroyBST(bt->lchild);
		DestroyBST(bt->rchild);
		free(bt);
	}
}
int main()
{
	BSTNode *bt,*p,*f;
	KeyType a[]={5,2,1,6,7,4,8,3,9};
	int n=sizeof(a)/sizeof(a[0]);
	bt=CreateBST(a,n);
	printf("BST:");DispBST(bt);printf("\n");
	int x=5;
	printf("ɾ��%d���\n",x);
	if (SearchBST(bt,x)!=NULL)
	{
		DeleteBST(bt,x);
		printf("BST:");DispBST(bt);printf("\n");
	}
	DestroyBST(bt);
	return 1;
}

/*
int main()
{
	BSTNode *bt,*p,*f;
	int n=12,x=46;
	KeyType a[]={25,18,46,2,53,39,32,4,74,67,60,11};
	bt=CreateBST(a,n);
	printf("BST:");DispBST(bt);printf("\n");
	printf("ɾ��%d���\n",x);
	if (SearchBST(bt,x)!=NULL)
	{
		DeleteBST(bt,x);
		printf("BST:");DispBST(bt);printf("\n");
	}
	DestroyBST(bt);
	return 1;
}
*/
