#include <stdio.h>
#include <malloc.h>
#define Maxsize 100

//���������͡�����ֱ��������Ӹ��±�����ʾ�����ö���ṹ��
typedef int Elemtype;
typedef struct{
	Elemtype data[Maxsize];
	int top;
}SqStack;

void initlist(SqStack *&s){
	s=(SqStack *)malloc(sizeof(SqStack));
	//��Ϊ�������ָ����s����Ҫ��->�ķ�ʽ����
	s->top=-1;
}
void destroylist(SqStack *&s){
//������˳��洢ʵ�ֵļ�������ʵ�ֵĽṹ�ͷſռ䶼��ֱ���ͷ�������������һ�ͷ�
	free(s);
}
bool Stackempty(SqStack *s){
	return (s->top==-1);
}
//��ջ
bool push(SqStack *&s,Elemtype e){
	if(s->top==Maxsize-1)
	//ջ��
		return false;
	//��ջ�������ȼӺ��
	s->top++;
	s->data[s->top]=e;
	//��������ȼ���s->data[++s->top]=e;
	return true;
}
//��ջ
bool pop(SqStack *&s,Elemtype &e){
	if(s->top==-1){ 
	//ջ��
		return false;
	}
	//��ջ˳���ȳ����
	e=s->data[s->top];
	s->top--;
	//�ȼ���e=s->data[s->top--];
	return true;
}
bool gettop(SqStack *s,Elemtype &e){
	//ջ����ȡ����
	if(s->top==-1)
		return false;
	e=s->data[s->top];
	return true;
}
void displist(SqStack *s){
	while(s->top!=-1){
		printf("%d,",s->data[s->top--]);
	}
}

//��˳��ջ�ж��ַ����Ƿ�Ϊ�Գƴ�
bool symmetry(char str[]){
	Elemtype e; //����������ջ��ֵ�����ַ�����һλ��ʼ�Ƚ�
	//ʲôʱ����Ҫ�Լ�����ṹָ�룿
	//����Ŀû����ṹ��ָ��ʱ����Ҫ���ж��岢��ʼ���ṹ
	//����������Ҫ���а����ݲ��ȥʱ���Ϳ��Բ���
	
	SqStack *s;  //����˳��ջָ��
	initlist(s);
	for(int i=0;str[i]!='\0';i++){
		//�ȱ���һ���ַ�������ȫ������ջ��
		push(s,str[i]);
	}
	for(int i=0;str[i]!='\0';i++){
		pop(s,e);
		//printf("\n%c,%c��",str[i],e); //������
		if(str[i]!=e){
			//��ĿûҪ������ջ�������ж��Ѿ���ɣ���ջ�����ˣ��ʿ������ٵ�
			destroylist(s);  
			return false;
		}
	}
	destroylist(s);
	return true;
}

//���һ���㷨�������Բ�����Ƿ����
bool check(char str[]){
	int i=0;Elemtype e;
	SqStack *s;  //����˳��ջָ��
	initlist(s);
	if(str[i]=='\0'){
		return false;
	}
	
	while(str[i]!='\0'){
		if(str[i]=='(')
			push(s,'(');
		else if(str[i]==')'){
			gettop(s,e);
			if(e=='('){
				pop(s,e);
				e='\0';  //����e��ʱ���������
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


int main(){
	char a[]="abcddcba",b[]="((5+4)*3)";
	SqStack *s;
	initlist(s);
	for(int i=0;i<=10;i++)
		push(s,i);
	for(int j=1;j<9;j+=3)
		pop(s,j);
	displist(s);
	printf("\n�Գƴ���%d\n",symmetry(a));
	printf("����ƥ�䣺%d\n",check(b));
	return 0;
}
