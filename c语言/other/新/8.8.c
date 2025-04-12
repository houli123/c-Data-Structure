#include <stdio.h>
#define N 2
struct id{
	int i1;
};
struct student{
	char cname[8];
	int ifinal;
	struct id id1;
};
struct student fnbest(struct student stB[],int i){   //只要函数形参是数组传递，那么都是地址传递
	for(int n=0;n<i-1;n++)
		printf("%s,%d,%d\n",stB[n].cname,stB[n].ifinal,stB[n].id1.i1);
	return stB[i-1];
}

int main(){
	struct student stA[]={{"aa",23,1},{"bb",22,2}},stC;
	stC=fnbest(stA,N);
	printf("%s,%d,%d\n",stC.cname,stC.ifinal,stC.id1.i1);
	return 0;
}
