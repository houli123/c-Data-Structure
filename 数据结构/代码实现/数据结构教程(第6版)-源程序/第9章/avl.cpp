//AVL�㷨
#include <stdio.h>
#include <malloc.h>
#define max(x,y) ((x)>(y)?(x):(y))
typedef int KeyType;					//�ؼ�������
typedef struct node 
{	
	KeyType key;                  		//�ؼ�����
	int ht;                       		//��ǰ���������߶�
    struct node *lchild,*rchild;		//���Һ���ָ��
} AVLNode;								//AVL���������
void DestroyAVL(AVLNode* b)			//�ͷ����еĽ��ռ�
{
	if (b!=NULL)
	{
		DestroyAVL(b->lchild);			//�ݹ��ͷ�������
		DestroyAVL(b->rchild);			//�ݹ��ͷ�������
		delete b;							//�ͷŸ����
	}
}
int getht(AVLNode* p)                 //���ؽ��p�������߶�
{	if (p==NULL)
		return 0;
    return p->ht;
 }
AVLNode* right_rotate(AVLNode* a) //�Խ��aΪ��������ת
{	AVLNode* b=a->lchild;
	a->lchild=b->rchild;
	b->rchild=a;
	a->ht=max(getht(a->rchild),getht(a->lchild))+1;
	b->ht=max(getht(b->rchild),getht(b->lchild))+1;
	return b;
}
AVLNode* left_rotate(AVLNode* a)            //�Խ��aΪ��������ת
{	AVLNode* b=a->rchild;
	a->rchild=b->lchild;
	b->lchild=a;
	a->ht=max(getht(a->rchild),getht(a->lchild))+1;
	b->ht=max(getht(b->rchild),getht(b->lchild))+1;
	return b;
}
AVLNode* LL(AVLNode* a)                    //LL�͵���
{
	return right_rotate(a);
}
AVLNode* RR(AVLNode* a)                     //RR�͵���
{
	return left_rotate(a);
}
AVLNode* LR(AVLNode* a)                     //LR�͵���
{	AVLNode* b=a->lchild;
	a->lchild=left_rotate(b);    			//���b����
	return right_rotate(a);     			//���a����
}
AVLNode* RL(AVLNode* a)                     //RL�͵���
{	AVLNode* b=a->rchild;
	a->rchild=right_rotate(b);   			//���b����
	return left_rotate(a);     				 //���a����
}
AVLNode* InsertAVL(AVLNode* p,KeyType k)	//��AVL��p�в���ؼ���k 
{	if (p==NULL)                             //����ʱ���������
	{   AVLNode* q=(AVLNode*)malloc(sizeof(AVLNode));
		q->key=k; q->ht=1;
		q->lchild=q->rchild=NULL;
        return q;
    }
	else if (k==p->key)							//�ҵ��ظ��ؼ���ʱ����			
         return p;
	else if (k<p->key)                           	//k<p->key�����
	{	p->lchild=InsertAVL(p->lchild,k);		 	//��k���뵽p����������
        if (getht(p->lchild)-getht(p->rchild)>=2)	//�ҵ�ʧ����p
        {	if (k<p->lchild->key)             		//k������p�����ӵ���������
                p=LL(p);               				//����LL�͵���
            else                           			//k������p�����ӵ���������
                p=LR(p);                			//����LR�͵���
        }
	}
	else                                   			//k>p->key�����
	{	p->rchild=InsertAVL(p->rchild,k);		 	//��k���뵽p����������
        if (getht(p->rchild)-getht(p->lchild)>=2)   //�ҵ�ʧ����p
        {	if (k>p->rchild->key)              		//k������p���Һ��ӵ���������
                p=RR(p);                			//����RR�͵���
            else                           			//k������p���Һ��ӵ���������
                p=RL(p);                			//����RL�͵���
        }
    }
    p->ht=max(getht(p->lchild),getht(p->rchild))+1;   //���½��p�ĸ߶�
	return p;
}
   
AVLNode* DeleteAVL(AVLNode* p,KeyType k)				//��AVL��p��ɾ���ؼ���k�Ľ��		
{	if (p==NULL) return p;
	if (p->key==k)                        	//�ҵ��ؼ���Ϊk�Ľ��p
	{	if (p->lchild==NULL)              	//���pֻ�������������
			return p->rchild;             	//ֱ�����Һ���������p
		else if (p->rchild==NULL)         	//���pֻ�������������
			return p->lchild;             	//ֱ��������������p
		else                           		//���pͬʱ���������������
		{	if (getht(p->lchild)>getht(p->rchild)) //���p���������ϸ�
			{	AVLNode* q=p->lchild;
            	while (q->rchild!=NULL)  	//�ڽ��p���������в��������q
					q=q->rchild;
                p=DeleteAVL(p,q->key); 		//ɾ�����q
                p->key=q->key;             	//��q���ֵ���p���ֵ
                return p;
            }
            else                      		//���p���������ϸ�
            {	AVLNode* q=p->rchild;
            	while (q->lchild!=NULL)   	//�ڽ��p���������в�����С���q
                    q=q->lchild;
                p=DeleteAVL(p,q->key);			 //ɾ�����q
                p->key=q->key;             	//��q���ֵ���p���ֵ
                return p;
            }
        }
    }
	else if (k<p->key)                       	//k<p->key�����
	{	p->lchild=DeleteAVL(p->lchild,k);			//����������ɾ���ؼ���k�Ľ��
        if (getht(p->rchild)-getht(p->lchild)>=2) //�ҵ�ʧ����p
        {	if (getht(p->rchild->lchild)>getht(p->rchild->rchild))
                    //print("��%d��RL����" %(p->key))
                p=RL(p);                //�����p���Һ��ӵ��������ϸ�,��RL�͵���
            else
                    //print("��%d��RR�͵���" %(p->key))
                p=RR(p);                //�����p���Һ��ӵ��������ϸ�,��RR�͵���
        }
    }
	else if (k>p->key)                           //k>p->key�����
    {	p->rchild=DeleteAVL(p->rchild,k);   //����������ɾ���ؼ���k�Ľ��
        if (getht(p->lchild)-getht(p->rchild)>=2) //�ҵ�ʧ����p
        { 	if (getht(p->lchild->rchild)>getht(p->lchild->lchild))
                    //print("��%d��LR�͵���" %(p->key))
            	p=LR(p);                //�����p�����ӵ��������ϸ�,��LR�͵���
            else
                    //print("��%d��LL�͵���" %(p->key))
                p=LL(p);                //�����p�����ӵ��������ϸ�,��LL�͵���
        }
    }
    p->ht=max(getht(p->lchild),getht(p->rchild))+1;   //���½��p�ĸ߶�
    return p;
}
AVLNode* SearchAVL(AVLNode* p,KeyType k)	         //��AVL��p�в��ҹؼ���k�Ľ��
{	if (p==NULL) return NULL;					//��������Nonel
    if (p->key==k) return p;		        //�ҵ��󷵻�p
    if (k<p->key)
        return SearchAVL(p->lchild,k);	    //���������еݹ����
    else
        return SearchAVL(p->rchild,k);	    //���������еݹ����
}
void inorder(AVLNode* p)                    //����������н��
{
    if (p!=NULL)
    {	inorder(p->lchild);
        printf("%d ",p->key);
        inorder(p->rchild);
    }
}
void  DispAVL(AVLNode* p)           		//�����Ŵ����AVL��p 
{	if (p!=NULL)
    {	printf("%d",p->key);								//��������ֵ
        if (p->lchild!=NULL || p->rchild!=NULL)
        {	printf("(");   			    			//�к��ӽ��ʱ�����"("
            DispAVL(p->lchild);			    	//�ݹ鴦��������
            if (p->rchild!=NULL)
                printf(",");   		    			//���Һ��ӽ��ʱ�����","
            DispAVL(p->rchild);			    	//�ݹ鴦��������
            printf(")");   			    			//�к��ӽ��ʱ�����")"
		}
	}
}
int main()
{
	AVLNode *b=NULL;
	int i,j,k;
	KeyType a[]={16,3,7,11,9,26,18,14,15};
	int n=sizeof(a)/sizeof(a[0]);
	printf(" ����һ��AVL��:\n");
	for(i=0;i<n;i++)
	{
		printf("   ��%d��,����%dԪ��:",i+1,a[i]);
		b=InsertAVL(b,a[i]);
		DispAVL(b);printf("\n"); 
	}
	printf("   AVL:");DispAVL(b);printf("\n");
	printf(" ɾ������:\n");						//��9.6
	k=11;
	printf("   ɾ���ؼ���%d:",k);
	b=DeleteAVL(b,k);
	printf("   AVL:");DispAVL(b);printf("\n");
	k=9;
	printf("   ɾ���ؼ���%d:",k);
	b=DeleteAVL(b,k);
	printf("   AVL:");DispAVL(b);printf("\n");
	k=3;
	printf("   ɾ���ؼ���%d:",k);
	b=DeleteAVL(b,k);
	printf("   AVL:");DispAVL(b);printf("\n\n");
	DestroyAVL(b);
	return 1;
}
    
