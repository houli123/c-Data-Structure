#include <stdio.h> 
#include <malloc.h>
#define MAXL 100

//����������
typedef int keytype;
typedef char infotype;
typedef struct node{
	keytype key;
	infotype data;
	struct node *lchild,*rchild;
}bstNode;
//����ʹ������ݹ飩
bool insertBst(bstNode *&bt,keytype k){
	if(!bt){  //
		bt=(bstNode *)malloc(sizeof(bstNode));
		bt->key=k;
		bt->lchild=bt->rchild=NULL;
	}
	else if(k==bt->key)  //���ܴ��ڹؼ�����ͬ�Ľ��
		return false;
	else if(k<bt->key)
		return insertBst(bt->lchild,k);
	else
		return insertBst(bt->rchild,k);
}
bstNode * createBst(keytype a[],int n){
	//�������ĸ��ڵ�
	bstNode *bt=NULL;
	int i=0;
	while(i<n){
		insertBst(bt,a[i]);
		i++;
	}
	return bt;
}
//���ң��ǵݹ飩
bstNode *searchBst(bstNode *bt,keytype k){
	while(!bt && bt->key!=k){
		if(k<bt->key)
			bt=bt->lchild;
		else
			bt=bt->rchild;
	}
	return bt;
}
//���ң��ݹ飩
bstNode *searchBst2(bstNode *bt,keytype k){
	if(!bt && bt->key==k)
		return bt;
	if(k<bt->key)
		return searchBst2(bt->lchild,k);
	else
		return searchBst2(bt->rchild,k);
}
//�ݹ����������������
void dispBst(bstNode *bt){
	if(bt){
		dispBst(bt->lchild);
		printf("%d,",bt->key);
		dispBst(bt->rchild);
	}
}

//ɾ������������ʾ
//���ɾ���Ĳ�����������������
void deleter(bstNode *&b){
	bstNode *p;
	p=b;
	b=b->rchild;
	free(p);
}
//ɾ�������������Ĳ���
bool deleteR(bstNode *&bt,keytype k){
	//��Ҫ���ҵ�k��λ��
	if(bt){
		if(bt->key==k){
			deleter(bt);
			return true;
		}
		else if(bt->key<k)
			deleteR(bt->lchild,k);
		else
			deleteR(bt->rchild,k);
	}
	else 
		return false;
}


//ɾ�������������Ľ���㷨
//��������
bool deleteBst(bstNode *&bt,keytype k);
void Delete(bstNode *&p);
void deleteboth(bstNode *p,bstNode *&r);
//��������
bool deleteBst(bstNode *&bt,keytype k){
	if(!bt)
		return false;
	else{
		if(bt->key>k)
			return deleteBst(bt->lchild,k);
		else if(bt->key<k)
			return deleteBst(bt->rchild,k);
		else{   //�ҵ���Ҫɾ���Ľ��
			Delete(bt);
			return true;
		}
	}
}
void Delete(bstNode *&p){  //��������ɾ�����p���ܺͣ�
	bstNode *q;
	if(p->rchild==NULL){  //û�������������������
		q=p;
		p=p->lchild;
		free(q);
	}
	else if(p->lchild==NULL){  //û�������������Һ������
		q=p;
		p=p->rchild;
		free(q);
	}
	else 
		deleteboth(p,p->lchild); //�����������е�ɾ������
		//�������������������������Ϊ���滻
}
void deleteboth(bstNode *p,bstNode *&r){ //�����������е�ɾ���㷨
	bstNode *q;
	if(r->rchild!=NULL)  //�ݹ����������е������½�㣨���
		deleteboth(p,r->rchild);
	else{ //�ҵ�����������û�����������ǵ�ǰ���r���
		p->key=r->key;
		p->data=r->data;
		q=r;
		r=r->rchild;  //���������
		free(q);
	}
}


int main(){
	keytype a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	bstNode *bt=createBst(a,n);bstNode *p;
	dispBst(bt);printf("\n");
	deleteBst(bt,2);
	dispBst(bt);
    return 0;
}
