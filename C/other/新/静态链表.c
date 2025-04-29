#include <stdio.h>
struct LinkNode{
    int data;
    struct LinkNode *next;  //定义指向下一位的指针
};

void test(){
	struct LinkNode node1={10,NULL};  //定义各结点的数据域
	struct LinkNode node2={20,NULL};
	struct LinkNode node3={30,NULL};
	
	node1.next=&node2;  //定义各节点的指针域
	node2.next=&node3;
	
	//如何遍历链表？
	//先定义一个辅助指针变量（也可以理解为头指针变量）
	struct LinkNode *pCurrent=&node1; //拿到链表的第一个结点相当于拿到整个链表
	while(pCurrent != NULL){
		printf("%d ",pCurrent->data);
		//指针移到下一个元素的首地址
		pCurrent=pCurrent->next;
	}
}

int main(){
	test();
}
