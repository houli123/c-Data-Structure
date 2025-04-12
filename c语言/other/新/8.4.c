#include <stdio.h>
struct sclass{
	char cname[10];
	int iscore;
}class[]={{"Αυ5",100},{"woshi",2}};
int main(){
	for(int i=0;i<2;i++){
		printf("%s,%d\n",class[i].cname,class[i].iscore);
	}
} 
