#include <stdio.h>
struct LinkNode{
    int data;
    struct LinkNode *next;  //����ָ����һλ��ָ��
};

void test(){
	struct LinkNode node1={10,NULL};  //���������������
	struct LinkNode node2={20,NULL};
	struct LinkNode node3={30,NULL};
	
	node1.next=&node2;  //������ڵ��ָ����
	node2.next=&node3;
	
	//��α�������
	//�ȶ���һ������ָ�������Ҳ�������Ϊͷָ�������
	struct LinkNode *pCurrent=&node1; //�õ�����ĵ�һ������൱���õ���������
	while(pCurrent != NULL){
		printf("%d ",pCurrent->data);
		//ָ���Ƶ���һ��Ԫ�ص��׵�ַ
		pCurrent=pCurrent->next;
	}
}

int main(){
	test();
}
