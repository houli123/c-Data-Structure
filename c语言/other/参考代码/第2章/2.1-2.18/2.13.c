#include <stdio.h>  //p39 2.13
int main()  //0494刘杰 
{
	int iwine = 1, ibeer = 2, itemp = ibeer;
	printf("iwine = %d, ibeer = %d\n",iwine, ibeer);//换之前 
	ibeer = iwine; iwine = itemp;  //两句代码结合在一起 
	printf("iwine = %d, ibeer = %d",iwine, ibeer);//换之后 
	getch();
}
