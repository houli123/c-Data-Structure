#include <stdio.h>
#include <malloc.h>
#define  Maxsize 100


typedef char elemtype;
//�α��϶�������˳��洢��������
typedef elemtype sqBinTree[Maxsize];


//�����϶�������˳��洢��������
struct TreeNode{
	elemtype value;
	bool isempty;  //����Ƿ�Ϊ��
};
TreeNode t[Maxsize];  //����һ������ΪMaxsize������t�����մ������¡��������ҵ�˳�����δ洢��ȫ�������еĸ������
 //��������˳��洢���弰��������ʵ��
 //i�����Һ��ӡ����ڵ㡢���ڲ��
 void initTree(TreeNode *&t){
 	for(int i=0;i<Maxsize;i++){
	 	t[i].isempty=true;  //��ʼ��ʱ�����н����Ϊ��
	 }
 }
 

int main(){
	//�α��ĳ�ʼ���ݸ�ֵ
	sqBinTree bt="#ABD#C#E######F";
	
	return 0;
}
