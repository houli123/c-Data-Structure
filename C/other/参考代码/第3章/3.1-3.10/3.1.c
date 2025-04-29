#include <stdio.h>  //0494Αυ½ά 
int main()
{
	int ix=3,iy=4,iz=5;
	printf("ix=%d,iy=%d,iz=%d\n",ix,iy,iz);
	printf("ix>iy is %d\n",ix>iy);
	iz+=ix<iy;
	printf("iz=%d\n",iz);
	getch();
}
