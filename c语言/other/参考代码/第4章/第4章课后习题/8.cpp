#include <stdio.h>  
#include <stdlib.h>
#include "time.h"
int  main()
{
	int iNum1,iNum2;
	srand((unsigned)time(NULL));
	iNum1=rand()%100+1;
	scanf("%d",&iNum2);
	while(1)
	{
		if(iNum2<iNum1)
    		printf("��С�� \n");
		else	if(iNum2>iNum1)
              		printf("�´��� \n");
         		else
              		{
					  printf("������");
					  break;
					}
		scanf("%d",&iNum2);
	}
	return 0;
} 

