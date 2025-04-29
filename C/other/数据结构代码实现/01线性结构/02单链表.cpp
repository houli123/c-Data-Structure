#include <stdio.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode{
	ElemType data;
	struct LNode * next;
}LinkNode; //LNodeǿ�����ǽ�㣬LinkNodeǿ����������

//��������������
//1.ͷ�巨
void createlisthead(LinkNode *&L,ElemType a[],int n){
	LinkNode *s;  //�ȴ������ڵ㣬�ڷֱ�Ϊ����L��ÿ���½����½ڵ����ռ�
	//��С�ֱ�������Ĵ�С�ͽ��Ĵ�С
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->next=NULL;
	for(int i=0;i<n;i++){
		s=(LinkNode *)malloc(sizeof(LNode));
		s->data=a[i];
		s->next=L->next;
		L->next=s;
	}
}
//2.β�巨
void createlisttail(LinkNode *&L,ElemType a[],int n){
	LinkNode *s,*r;  //βָ��
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->next=NULL;
	r=L;
	for(int i=0;i<n;i++){
		s=(LinkNode *)malloc(sizeof(LNode));
		s->data=a[i];
		r->next=s;
		r=s;
	}
	r->next=NULL;
}

//��������Ļ�������
//1.��ʼ������
void initlist(LinkNode *&L){
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->next=NULL;
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
	return(L->next==NULL);
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
//8.��ָ��λ��ǰ��������Ԫ��
bool insertlist(LinkNode *&L,int n,ElemType e){
	LinkNode *p=L,*s;
	int i=0;
	if(n<1||n>listlength(L))
	{
		printf("λ�ô���");
		return false;
	}
	for(i=0;i<n-1 && p->next!=NULL;i++){
		p=p->next;
	}
	if(p->next==NULL)
		return false;
	else{
		s=(LinkNode *)malloc(sizeof(LinkNode));
		s->data=e;
		s->next=p->next;
		p->next=s;
		return true;
	}
}
//9.ɾ��ָ��λ�õĽ��
bool deletelist(LinkNode *&L,int n,ElemType &e){
	LinkNode *p=L,*q;//p��ǰָ�룬q�Ǻ�ָ�룬Ҫfree��
	int i=0;
	if(n<1)
		return false;
	while(i<n-1 && p->next!=NULL){
		i++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else{
		q=p->next;
		if(q==NULL)
			return false;
		e=q->data;
		p->next=q->next;
		free(q);
		return true;
	}
}
//�ġ�Ӧ��
//1.��L��Ԫ�����ηָ�L1��β�壩��L2��ͷ�壩
void splitlist(LinkNode *&L,LinkNode *&L1,LinkNode *&L2){
	LinkNode *p=L->next,*r1=L1=L,*q;//r1ÿ��ָ��L1��βָ�����β����
	//L1��L��ͷ��㣬L2����һ��ͷ���
	L2=(LinkNode *)malloc(sizeof(LinkNode));
	L2->next=NULL;
	int i=1;  //��¼��ǰ��L���еĵڼ���Ԫ�أ�������L1��ż����L2
	while(p!=NULL){
		q=p->next;
		if(i%2==1){  //β���뵽L1��
			r1->next=p;
			r1=p;
		}
		else{  //ͷ���뵽L2��
			
			p->next=L2->next;
			L2->next=p;
		}
		p=q;
		i++;
	}
	r1->next=NULL;
}
//����
void splitlist2(LinkNode *&L,LinkNode *&L1,LinkNode *&L2){
	LinkNode *p=L->next,*r1=L1=L,*q;
	L2=(LinkNode *)malloc(sizeof(LinkNode));
	L2->next=NULL;
	
	while(p!=NULL){
		r1->next=p;
		r1=p;
		p=p->next;
		q=p->next;	
		p->next=L2->next;
		L2->next=p;
		p=q;
		}
	r1->next=NULL;
}
	
//2.���һ���㷨��ɾ��L��Ԫ��ֵ���Ľ�㣨���������Ľ��Ψһ��
void deletemax(LinkNode *&L,ElemType &e){
	LinkNode *p=L->next,*pre=L,*q=L;  //q����������Ľ���ǰһ����preʼ��p��ǰһ��
	ElemType max=p->data;
	while(p->next!=NULL){
		pre=p;
		p=p->next;
		if(p->data>max){
			q=pre;
			max=p->data;	
		}
	}
	e=max;
	p=q->next;
	q->next=p->next;
	free(p);
}

//3.��һ����ͷ���ĵ�����L��������һ�����ݽ�㣩�����һ���㷨ʹ��Ԫ�ص�����������
//˼·��ÿ�α���n�ε���������Ӧ��ִ��n*��n-1��*��n-2��*������
//ÿһ�α�����ȡ����С�Ľ�㣬ÿ�ν���������ͷ�巨���������У���Ҫ��һ����㱣��ÿ��ͷ�����µ�ͷ��㣬������ÿ�ζ���L
void ranklist(LinkNode *&L){
	LinkNode *minpre,*p,*l=L,*pre,*q;
	ElemType min;
	while(l->next!=NULL){
		p=l->next;
		min=p->data;
		minpre=l;
		while(p->next!=NULL){
			pre=p;
			p=p->next;
			if(p->data<min){
				min=p->data;
				minpre=pre;	
			}
		}//���ҳ���С�Ľ�㣬׼��ͷ��
		q=minpre->next;
		minpre->next=minpre->next->next;
		q->next=l->next;
		l->next=q;
		l=l->next;
	}
}
//�α���д��
//����˼�룺���׽ڵ��һλ����β���������������p����ʾ��ͷ������׽ڵ㵥���ó�������L
//Ȼ�������ж�p�����Ԫ���Ƿ�L����������Ԫ�أ�����ǣ�������Ԫ�ص�ǰ�棬ͬʱ����Ҳ�Ƿ���СԪ�صĺ���
void ranklist2(LinkNode *&L){
	LinkNode *p,*pre,*q;
	p=L->next->next;
	L->next->next=NULL;
	while(p!=NULL){
		q=p->next;
		pre=L;
		while(pre->next!=NULL && pre->next->data>p->data){  //Ϊ������������ý������
			pre=pre->next;
		}
		p->next=pre->next;
		pre->next=p;
		p=q;
	}
}

	


int main(){
	
	ElemType a[]={10,20,30,40,50,60,70,80,90,100};
	ElemType n=3,e=false;//e�������ղ��һ�ɾ����ֵ��������
	LinkNode *L,*L1,*L2;
	//printf("��%d\n",);
	//displist(L);
	initlist(L);//�ȳ�ʼ���ڲ���ɣ�
	createlisthead(L,a,sizeof(a)/sizeof(a[0]));
	createlisttail(L,a,sizeof(a)/sizeof(a[0]));
	printf("�����Ƿ�Ϊ���أ�%d\n",listempty(L));
	printf("����ĳ����ǣ�%d\n",listlength(L));
	printf("�������\n");
	displist(L);
	
	printf("��%d��Ԫ�ش�����%d�����ڵĻ���",n,getelem(L,n,e));
	printf("%d\n",e);   //���ﵱ�������޸�û��ô����Ч
	printf("%d�ǵ�%d��Ԫ��\n",e,locatelist(L,e));
	
	printf("������Ԫ��֮��\n");
	insertlist(L,2,200);
	displist(L);
	printf("ɾ����Ԫ��֮��\n");
	deletelist(L,5,e);
	displist(L);
	printf("ɾ����%d\n",e);
	
	printf("-------------\n");
	displist(L);
	printf("������ֶ�\n");
	splitlist2(L,L1,L2);
	displist(L1);
	displist(L2);
	splitlist(L,L1,L2);
	displist(L1);
	displist(L2);
	printf("deletemax-------------\n");
	deletelist(L,3,e);
	insertlist(L,2,100);  
	displist(L);
	deletemax(L,e);
	displist(L);
	printf("e=%d",e);
	
	printf("\nranklist-------------\n");
	for(int i=0;i<10;i++)
		insertlist(L,1,i);
	displist(L);
	ranklist(L);
	displist(L);
	ranklist2(L);
	displist(L);
	
	
	destroylist(L);
	return 0;
}
