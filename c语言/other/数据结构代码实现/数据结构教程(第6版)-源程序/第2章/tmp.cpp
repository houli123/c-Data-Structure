#include "linklist.cpp"			//������������������㷨

void Sort(LinkNode* h)
{
	if(h->next==NULL || h->next->next==NULL) 
		return;								//�ձ����ֻ��һ�����ʱ���� 
	LinkNode *p,*minp,*q;
	int minv;
	p=h->next;
	while (p!=NULL)							//��ָ��p����h�����н�� 
	{
		minv=p->data;
		minp=p;
		for(q=p->next;q!=NULL;q=q->next)	//�ӽ��p��ʼ�ҵ���Сֵ�Ľ��minp 
			if(q->data<minv)
			{
				minp=q;
				minv=q->data;
			}
		if (minp!=p)
		{
			int tmp=p->data;				//�������p��minp�Ľ��ֵ 
			p->data=minp->data;
			minp->data=tmp;
		}
		p=p->next; 
	}
}
int main()
{
	int a[]={3,4,5,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	LinkNode* L;
	CreateListR(L,a,n);
	printf("L: "); DispList(L);
	Sort(L);
	printf("L: "); DispList(L);
	DestroyList(L);
	return 0;
}

