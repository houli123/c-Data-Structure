#include <stdio.h>
#include <malloc.h>
#define Maxsize 100

//����������
//����ջ�Ļ���������Ҫ����һ���βΣ�ָ���Ƕ��ĸ�ջ���в���
typedef int Elemtype;
typedef struct{
	Elemtype data[Maxsize];
	//top������±��0��ʼ��ջ��top2���ұ��±��Maxsize��ʼ��ջ
	int top,top2;
}SqStack;

void initlist(SqStack *&s,int n){
	s=(SqStack *)malloc(sizeof(SqStack));
	if (n==1)
		s->top=-1;
	else
		s->top2=Maxsize;
}
void destroylist(SqStack *&s){
	free(s);
}
bool Stackempty(SqStack *s,int n){
	if (n==1)
		return s->top==-1;
	else
		return s->top2==Maxsize;
}
//��ջ
bool push(SqStack *&s,Elemtype e,int n){
	if(n==1){
		if(s->top > s->top2-1)
		//ջ��
			return false;
		s->top++;
		s->data[s->top]=e;
		//��������ȼ���s->data[++s->top]=e;
	}
	else{
		if(s->top < s->top2-1)
		//ջ��
			return false;
		s->top2--;
		s->data[s->top2]=e;
		//��������ȼ���s->data[--s->top2]=e;
	}
	return true;
}
//��ջ
bool pop(SqStack *&s,Elemtype &e,int n){
	if (n==1){
		if(s->top==-1){ 
		//ջ��
			return false;
		}
		e=s->data[s->top];
		s->top--;
		//�ȼ���e=s->data[s->top--];
	}
	else{
		if(s->top2==Maxsize){ 
		//ջ��
			return false;
		}
		e=s->data[s->top2];
		s->top2--;
		//�ȼ���e=s->data[s->top2--];
	}
	return true;
}
bool gettop(SqStack *s,Elemtype &e,int n){
	if(n==1){
		if(s->top==-1)
			return false;
		e=s->data[s->top];
	}
	else{
		if(s->top==Maxsize)
			return false;
		e=s->data[s->top2];
	}
	return true;
}
void displist(SqStack *s,int n){
	if(n==1){
		s->top++;
		while(s->top!=-1)
			printf("%d,",s->data[s->top--]);
	}
	else{
		s->top2++;
		while(s->top2!=Maxsize)
			printf("%d,",s->data[s->top2++]);	
	}
}



int main(){
	int n;
	SqStack *s;
	printf("������Ҫ��1��2�ĸ�ջ���в�����");
	scanf("%d",&n);
	if((n!=1) && (n!=2)){
		printf("�������,�������");
		exit(0);
		}
	initlist(s,n);
	for(int i=0;i<10;i++)
		push(s,i,n);
	for(int j=1;j<9;j+=3)
		pop(s,j,n);
	displist(s,n);
	return 0;
}
