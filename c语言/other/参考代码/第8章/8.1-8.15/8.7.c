#include <stdio.h> 
#define N 3  //ѧ������
struct Student{
	int inum,ichinese,imath,ienglish,isum;
	char cname[10];
}stu[N],stbest;

void fninput(struct Student stu[]){
	int i;
	printf("������ѧ����Ϣ��");
	for(i=0;i<N;i++){
		scanf("%s%d%d%d%d",stu[i].cname, &stu[i].inum, &stu[i].ichinese, &stu[i].imath, &stu[i].ienglish);
		stu[i].isum=stu[i].ichinese + stu[i].imath + stu[i].ienglish;
	}
}

struct Student fnbest(struct Student stu[]){
	int imax=0,i;
	for(i=0;i<N;i++)
		if(stu[imax].isum<stu[i].isum)
			imax=i;
	return stu[imax];
}

int main(){
	fninput(stu);
	stbest=fnbest(stu);
	printf("�ܷ���ߵ�ѧ����%s��ѧ����%d������%d����ѧ%d��Ӣ��%d���ܷ�%d",stbest.cname, stbest.inum, stbest.ichinese, stbest.imath, stbest.ienglish, stbest.isum);
    return 0;
}
