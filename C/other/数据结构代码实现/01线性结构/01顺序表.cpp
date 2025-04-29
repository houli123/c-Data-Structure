#include <stdio.h>
#include <malloc.h>
#define MaxSize 50

typedef int ElemType;
typedef struct{
	ElemType data[MaxSize];  //elemtype����int���
	int length;
}Sqlist;  //������struct��������д�����Ծ��ǽṹ��ָ�����ͣ�����Ҫ��ָ�룿

//1.����˳���
void Create(Sqlist * &L,ElemType a[],int n){
	int i=0;
	L=(Sqlist *)malloc(sizeof(Sqlist));
	while(i<n){
		L->data[i]=a[i];
		i++;
	}
	L->length=i;
}

//2.˳�����������㷨
//1.��ʼ��˳���
void initlist(Sqlist *& L){
	L=(Sqlist *)malloc(sizeof(Sqlist));
	L->length=0;
}
//2.����˳���
void destroylist(Sqlist *&L){
	free(L);
}
//3.�ж�˳����Ƿ�Ϊ�ձ�
bool listempty(Sqlist *L){
	return(L->length==0);
}
//4.��˳���ĳ���
int listlength(Sqlist *L){
	return(L->length);
}
//5.���˳���
void displist(Sqlist * L){
	for(int i=0;i<L->length;i++)
		printf("%d,",L->data[i]);
	printf("\n");
}
//6.��˳����ж�Ӧλ�õ�Ԫ��ֵ
bool getelem(Sqlist *L,int i,ElemType &e){
	if(i<1 || i>L->length)
		return false;
	e=L->data[i-1];
	return true;
}
//7.��Ԫ��ֵ����λ��
int locateelem(Sqlist *L,ElemType e){
	int i=0;
	while(i<L->length && L->length!=e)
		i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
//8.��λ��ǰ��������Ԫ��
bool listinsert(Sqlist * &L,int i,ElemType e){
	int j;
	if(i<1 || i>L->length)
		return false;
	i--;
	for(j=L->length;j>i;j--)
		L->data[j]=L->data[j-1];
	L->data[i]=e;
	L->length++;
	return true;
}
//9.ɾ����i������Ԫ��
bool listdelete(Sqlist * &L,int i,ElemType &e){
	int j;
	if(i<1 || i>L->length)
		return false;
	i--;
	e=L->data[i];
	for(j=i;j<L->length;j++)
		L->data[j]=L->data[j+1];
	L->length--;
	return true;
}

//3.˳����Ӧ��
//1.ɾ������ֵ����x��Ԫ�أ�ʱ�临�Ӷ�ΪOn���ռ临�Ӷ�ΪO1\
//���Լ�д�Ĵ���汾
void listdeleteall(Sqlist * &L,ElemType x){
	int i=0;
	while(i<L->length){
		if(L->data[i]==x){
			for(int j=i;j<L->length;j++){
				L->data[j]=L->data[j+1];
			}
			L->length--;
		}
		else
			i++;
	}
}
//�𰸰汾
void listdeleteall2(Sqlist *&L,ElemType x){
	int k=0,i;
	for(i=0;i<L->length;i++){
		if(L->data[i]!=x){
			L->data[k]=L->data[k];
			k++;
		}
	}
	L->length=k;  //kΪ������x�ĸ�������������x��������ǰ�ţ����ǵ���������ñ����ͺ����Ԫ���ӵ�
}
//2.���һ�������ܸ�Ч���㷨��ʹ��һ��Ԫ��Ϊ�ֽ��ߣ�С�ڵķ���ߣ����ڵķ��ұ�
void boundaryList(Sqlist *&L){
	ElemType x=L->data[0];
}


int main(){
	ElemType a1[]={10,20,30,40,50,60,70,80,90,100,10};
	Sqlist *L;
	initlist(L);
	Create(L,a1,sizeof(a1)/sizeof(a1[0]));
	printf("�Ƿ�Ϊ�ձ�%d\n",listempty(L));
	printf("��ĳ��ȣ�%d\n",listlength(L));
	displist(L);
	
	listinsert(L,4,999);
	printf("test------------------------------\n");
	displist(L);
	listdeleteall(L,10);
	displist(L);
	
	destroylist(L);
	printf("�ݻ����ݺ�û��free�򻹻��кܶ�������\n");
	displist(L);//�ݻ����ݺ�û��free�򻹻��кܶ�������
	return 0;
}
