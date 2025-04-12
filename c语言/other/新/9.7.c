#include <stdio.h> 
int main(){
	char ch[]="hello chat",*pix=ch;
	int isum=0;
	for(int i=0;pix[i]!='\0';i++){
		isum++;
	}
	printf("isum=%d",isum);
    return 0;
}
