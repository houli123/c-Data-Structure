// ѭ��˫���� ��ɾ��data���
bool deletem(DLinkNode *&L,ElemType x){
	DlinkNode *p=L->next;
	while(p!=L && p->data!=x)
		p=p->next;
	if(p!=L){
		p->next->prior=p->prior;
		p->prior-next=p->next;
		free(q)
	}
} 
