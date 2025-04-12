#include <stdio.h>  //p34 2.9
int main()  //0494Αυ½ά 
{
	int ix, iy;  //f(x)=3x*x*x+2x*x+x+1
	printf("x = ");
	scanf("%d",&ix);
	iy = 3*ix*ix*ix+2*ix*ix+ix+1;
	printf("f(%d) = %d", ix, iy);
	getch();
}
