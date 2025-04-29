#include <stdio.h> 
int main(){
	char ch;int i=0;
	ch=getchar();
	for(i=0;ch!='#';i++){
		if(ch>='a' && ch<='x')
			ch+=2;
		else if(ch>='y' && ch<='z')
			ch-=24;
		putchar(ch);
		ch=getchar();
	}
    return 0;
}
