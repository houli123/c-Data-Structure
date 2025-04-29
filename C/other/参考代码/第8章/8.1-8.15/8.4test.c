#include <stdio.h> 
#include <string.h>
#define N 3
struct Student{
	int inum,ichinese,imath,ienglish,isum;
	char cname[10];
}stu[N]={{1,10,20,30,0,"Tom"},{2,100,200,300,0,"Alice"},{3,1000,2000,3000,0,"Jack"}};

int main(){
	int i,k,itemp;char ctemp[10];
	for(i=0;i<N;i++)
		stu[i].isum=stu[i].ichinese + stu[i].imath + stu[i].ienglish;
	for(i=0;i<N;i++){
		for(k=N-1;k>i;k--){
			if(stu[k].isum>stu[k-1].isum){
				strcpy(ctemp,stu[k].cname); strcpy(stu[k].cname,stu[k-1].cname); strcpy(stu[k-1].cname,ctemp);
				itemp=stu[k].inum; stu[k].inum=stu[k-1].inum; stu[k-1].inum=itemp;
				itemp=stu[k].ichinese; stu[k].ichinese=stu[k-1].ichinese; stu[k-1].ichinese=itemp;
				itemp=stu[k].imath; stu[k].imath=stu[k-1].imath; stu[k-1].imath=itemp;
				itemp=stu[k].ienglish; stu[k].ienglish=stu[k-1].ienglish; stu[k-1].ienglish=itemp;
				itemp=stu[k].isum; stu[k].isum=stu[k-1].isum; stu[k-1].isum=itemp;
			}
		}
	}
	for(i=0;i<N;i++){
		printf("总分第%d名是%s，学号是%d，语文%d，数学%d，英语%d，总分%d\n",i+1, stu[i].cname, stu[i].inum, stu[i].ichinese, stu[i].imath, stu[i].ienglish, stu[i].isum);
	}
    return 0;
}
