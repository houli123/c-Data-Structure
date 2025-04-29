#include <stdio.h> 
#define N 8
struct Student{
	char cname[N];
	int imiddle,ifinal;
	float fave;
}A,B;

void fnbest(struct Student a,struct Student b){
	a.fave=(a.ifinal + a.imiddle)/2.0;
	b.fave=(b.ifinal + b.imiddle)/2.0;
	if(a.fave>b.fave){
		printf("%s:%d %d %.1f",a.cname, a.imiddle, a.ifinal, a.fave);
	}else{
		printf("%s:%d %d %.1f",b.cname, b.imiddle, b.ifinal, b.fave);
	}
}

int main(){
	scanf("%s%d%d",A.cname,&A.imiddle,&A.ifinal);
	scanf("%s%d%d",B.cname,&B.imiddle,&B.ifinal);
	fnbest(A,B);
    return 0;
}
