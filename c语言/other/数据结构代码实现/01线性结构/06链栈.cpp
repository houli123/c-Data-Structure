#include <stdio.h>
#include <malloc.h>
#include <ctype.h>
#define Maxsize 100

//����������
typedef char Elemtype;
typedef struct linknode{
	Elemtype data;
	struct linknode *next;
}LinkStNode;

void initlist(LinkStNode *&s){
	s=(LinkStNode *)malloc(sizeof(LinkStNode));
	s->next=NULL;
}
void destroylist(LinkStNode *&s){
	linknode *p=s->next,*q=s;
	//������������Ҫʹͷָ��һֱָ��ɾ�����ʣ�µĽ��
	while(p!=NULL){  //pΪNULLʱ��qΪβ�ڵ�
		free(q);
		q=p;  //ָ��ɾ���ڵ����һ���ڵ�
		p=p->next;
	}
	free(q);  //һ�����ͷŽڵ�
}
bool Stackempty(LinkStNode *s){
	return (s->next==NULL);
}
//��Ϊ��ջ�����������Բ����ж��Ƿ����ˣ�������void
void push(LinkStNode *&s,Elemtype e){
	LinkStNode *p=(LinkStNode *)malloc(sizeof(linknode));
	p->data=e;
	p->next=s->next;
	s->next=p;
}
bool pop(LinkStNode *&s,Elemtype &e){
	if(s->next==NULL)
		return false;
	linknode *p=s->next;
	e=p->data;
	s->next=p->next;
	free(p);
	return true;
}
bool gettop(LinkStNode *&s,Elemtype &e){
	if(s->next==NULL)
		return false;
	e=s->next->data;
	return true;
}

void displist(LinkStNode *s){
	linknode *p=s->next;
	while(p!=NULL){
		printf("%d,",p->data);
		p=p->next;
	}
}

//���һ���㷨�������Բ�����Ƿ����
bool match(Elemtype str[]){
	int i=0;Elemtype e;
	LinkStNode *s;  //����˳��ջָ��
	initlist(s);
	if(str[i]=='\0'){
		return false;
	}
	
	while(str[i]!='\0'){
		if(str[i]=='('){
			push(s,'(');
		}
		else if(str[i]==')'){
			if(gettop(s,e)!=0){
				pop(s,e);
			}
			else
				return false;
		}
		i++;
	}
	if(Stackempty(s)==1)
		return true;
	else
		return false;
}

//���һ���㷨����������������Ƿ����
bool match2(Elemtype str[]){
	int i=0;Elemtype e;
	LinkStNode *s;  //����˳��ջָ��
	initlist(s);
	if(str[i]=='\0')
		return false;
	while(str[i]!='\0'){
		if((str[i]=='(' || str[i]=='[') || str[i]=='{')
			push(s,str[i]);
		else if((str[i]==')' || str[i]==']') || str[i]=='}'){
			gettop(s,e);
			if((e=='(' && str[i]==')') || (e=='[' && str[i]==']') || (e=='{' && str[i]=='}'))
				pop(s,e);
			else
				return false;
		}
		i++;
	}
	if(Stackempty(s)==1)
		return true;
	else
		//printf("\n����3\n");
		return false;
}

int main(){
	char str[]="(3+2)*2=10",str2[]="char[5]=(1+1)=2={2})";
	LinkStNode *s;
	initlist(s); 
	for(int i=1;i<=10;i++){
		push(s,i);
	}
	displist(s);
	
	//1��ʾƥ�䣬0��ʾ��ƥ��
	printf("\nԲ����ƥ����%d",match(str));
	printf("\n��������ƥ����%d",match2(str2));
	return 0;
}
