#include <stdio.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode * next,*prior;
}LinkNode; 
//Nodeǿ������˫�����㣬LinkNodeǿ������˫������

//һ������˫����
//1.ͷ�巨
void createlist(LinkNode *&L,ElemType a[],int n){
	LinkNode *s;
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->prior=L->next=NULL;
	for(int i=0;i<n;i++){
		s=(LinkNode *)malloc(sizeof(LNode));
		s->data=a[i];
		s->next=L->next;
		if(L->next!=NULL)
			L->next->prior=s;
		s->prior=L;
		L->next=s;
	}
}
//2.β�巨
void createlist2(LinkNode *L,ElemType a[],int n){
	LinkNode *s,*r;
	L=(LinkNode *)malloc(sizeof(LinkNode));
	r=L;
	for(int i=0;i<n;i++){
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->data=a[i];
		r->next=s;
		s->prior=r;
		r=s;
	}
	r->next=NULL;
}

//����˫����Ļ�������
//1.��ʼ������
void initlist(LinkNode *&L){
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->next=NULL;
	L->prior=NULL;
}
//2.��������
void destroylist(LinkNode *&L){
	//����������ͷָ��ҲҪ����
	LinkNode *pre=L,*p=L->next;
	while(p!=NULL){
		free(pre);
		pre=p;
		p=p->next;
	}
	free(pre);
}
//3.�ж������Ƿ�Ϊ��
bool listempty(LinkNode *L){
	return(L->next==NULL && L->prior==NULL);
}
//4.������ĳ���,ͷ�ڵ㲻������
int listlength(LinkNode *L){
	int n=0;
	LinkNode *p=L;
	while(p->next!=NULL){
		n++;
		p=p->next;
	}
	return n;
}
//5.�������
void displist(LinkNode *L){
	LinkNode *p=L;
	while(p->next!=NULL){
		printf("%d,",p->next->data);
		p=p->next;
	}
	printf("\n");
}
//6.�����Ա���ĳ�����ݵ�Ԫ��ֵ
bool getelem(LinkNode *L,int i,ElemType &e){
	LinkNode *p=L->next;
	if(i<=0)
		return false;
	for(int j=1;j<i;j++){
		if(p==NULL)
			return false;
		p=p->next;
	}
	e=p->data;
	return true;
}
//7.��Ԫ��ֵ���Ҳ�����λ��
int locatelist(LinkNode *L,ElemType e){
	int i=1;
	LinkNode *p=L->next;
	if(p==NULL)
		return false;
	while(p->next!=NULL && e!=p->data){
		i++;p=p->next;
	}
	if(e==p->data)
		return i;
	else 
		return false;
}
//8.��ָ��λ��ǰ������
bool insertlist(LinkNode *&L,int i,ElemType e){
	int j=0;
	LinkNode *p=L->next,*s;
	if(i<=0)
		return false;
	while(j<i-1 && p->next!=NULL){
		j++;
		p=p->next;
	}
	if(p->next==NULL){
		return false;
	}
	s=(LinkNode *)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;
	if(p->next!=NULL)    //δ�ҵ���i-1�����
		p->next->prior=s;
	s->prior=p;
	p->next=s;
	return true;
}
//9.ɾ��ָ��λ�õĽ��
bool deletelist(LinkNode *&L,int i,ElemType &e){
	int j=0;
	LinkNode *p=L,*q;
	if(i<=0)
		return false;
	while(j<i-1 && p->next!=NULL){
		j++;
		p=p->next;
	}
	if(p->next==NULL)  //δ�ҵ���i-1�����
		return false;
	q=p->next;  //���ҵ���i-1����㣬Ȼ��ɾ����i����㼴q���
	e=q->data;
	p->next=q->next;
	if(p->next!=NULL){
		q->next->prior=p;
	}
	free(q);
	return true;
}

//����Ӧ��ʵ��
//1.������Ԫ�����ã��õ���ͷ�巨��˼�룩
bool reverselist(LinkNode *&L){
	LinkNode *p=L->next,*q=p; //p������ʾÿ��ͷ���ȥ��ָ��
	//q��ʾp����һ��ָ��
	L->next=NULL;
	while(p!=NULL){
		q=p->next;//��Ϊ����Ҫʹp��nextÿ��ָ���׽�㣬������Ҫһ��������������p��next
		p->next=L->next;
		if(L->next!=NULL)
			L->next->prior=p;
		p->prior=L;
		L->next=p;
		p=q;
	}
}
//2.ʹһ����ͷ�ڵ��˫����������������
//�ҵ�˼�룺���αȽϣ�ÿ�ν���С��
void sortlist(LinkNode *&L){
	
}

int main(){
	ElemType a[]={10,20,30,40,50,60,70,80,90,100};
	ElemType n=3,e=114514;//e�������ղ��һ�ɾ����ֵ��������
	LinkNode *L;
	createlist(L,a,sizeof(a)/sizeof(a[0]));
	//����sizeof���ж����鳤��
	displist(L);
	
	//����
	insertlist(L,n,e);
	displist(L);
	//ɾ��
	deletelist(L,n+1,e);
	displist(L);
	
	//����˫����
	reverselist(L);
	displist(L);
    return 0;
}
