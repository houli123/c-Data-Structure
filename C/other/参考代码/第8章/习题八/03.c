#include <stdio.h> 
#define N 2
int inum=0;
struct student{
	char cname[20],cnum[20],csex[10];
	int iscore[5];
}stu[N];

void fninput(){
	int k,i;
	printf("�밴˳������ѧ����ѧ�š��������Ա�����Ź��γɼ���\n");
	for(i=0;i<N;i++){
		scanf("%s%s%s%",stu[i].cnum,stu[i].cname,stu[i].csex);
		for(k=0;k<5;k++){
			scanf("%d",&stu[i].iscore[k]);
		}	
	}
}

int fnmin(int i){
	int k,imin;
	imin=stu[i].iscore[0];
	for(k=0;k<5-1;k++){
		if(stu[i].iscore[k]>stu[i].iscore[k+1]){
			imin=stu[i].iscore[k+1];
		}
	}
	return imin;
}

int fnmax(int i){
	int imax,k;
	imax=stu[i].iscore[0];
	for(k=0;k<5-1;k++){
		if(stu[i].iscore[k]<stu[i].iscore[k+1]){
			imax=stu[i].iscore[k+1];
			//printf("666");
		}
	}
	return imax;
}

void fncount(int i){
	//static int inum=0;
	if(stu[i].iscore[0]<60 && stu[i].iscore[1]<60 && stu[i].iscore[2]<60 && stu[i].iscore[3]<60 && stu[i].iscore[4]<60){
		inum++;
	}
}

int main(){
	int i;
	fninput();
	for(i=0;i<N;i++){
		printf("��%dλͬѧ����ͷ�Ϊ��%d,��߷�Ϊ��%d\n",i+1,fnmin(i),fnmax(i));
		fncount(i);
	}
	printf("ÿ�Ź��ζ��������ѧ�������У�%d��\n",inum);
    return 0;
}
