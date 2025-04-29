#include <stdio.h> 
int fnmax(int ix,int iy,int iz){
	int imax=ix;
	if(ix<iy){
		imax=iy;
		if(iy<iz)
			imax=iz;
	}
	else{
		if(ix<iz)
			imax=iz;
	}
	return imax;	
}

int fnmin(int ix,int iy,int iz){
	int imin=ix;
	if(ix>iy){
		imin=iy;
		if(iy>iz)
			imin=iz;
	}
	else{
		if(ix>iz)
			imin=iz;
	}
	return imin;	
}

int main()
{
	int ix,iy,iz,imax,imin;
	scanf("%d%d%d",&ix,&iy,&iz);
	printf("imax-imin=%d",fnmax(ix,iy,iz)-fnmin(ix,iy,iz));
    return 0;
}
