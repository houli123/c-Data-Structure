#include <stdio.h>
#define N 10
void main()
{
	int i,k,input,ibuer=0,iscore[N+1]={};
	int ifind,idel,iinput,iinsert,isort,itemp;
	printf("  --------welcome score system---------  ");
	while(ibuer==0)
	{	
		printf("\n		0.ouput");
		printf("\n  1:input 	 2.find		3.sort\n");
		printf("  4.insert	 5.delete	6.exit\n");
		printf("��������Ҫ���еĲ�����");
		scanf("%d",&input);
		switch(input)
		{
			case 0:  //output ��� 
				printf("��ǰ������Ϊ��\n");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				break; 
				
			case 1:  //input ���룬¼����� 
				printf("������ʮ��������\n");
				for(i=0;i<N;i++)
					scanf("%d",&iscore[i]);
				printf("�ɼ�¼��������Ϊ��\n");
				for(i=0;i<N;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 2:  //find�����ҷ��� 
				printf("������һ����Ҫ���ҵķ�����");
				scanf("%d",&ifind);
				for(i=0;i<N+1;i++)
					if(iscore[i]==ifind)
					{
						printf("�ɼ�Ϊ%d��ѧ���ǵ�%d��ѧ��",ifind,i+1);
						break;
					}
				if(iscore[i]!=ifind)
					printf("�ɼ�Ϊ%d��ѧ��û�ҵ�",ifind);
				break;
				
			case 3:  //sort  �������򣬴�С���� 
				printf("����ǰ������Ϊ��");
				for(i=0;i<N;i++)
					printf("%d  ",iscore[i]);   
				for(i=0;i<N;i++)  
					for(k=N-1;k>=i;k--)
					{ 
						if(iscore[k]<iscore[k-1])
						{
							itemp=iscore[k];
							iscore[k]=iscore[k-1];
							iscore[k-1]=itemp;
						}
					} 
				printf("\n����������Ϊ��");
				for(i=0;i<N;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 4:  //insert ����������������򲻱� 
				printf("��������Ҫ����ķ�����");
				scanf("%d",&iinsert);
				printf("\n����ǰ������Ϊ��");
				for(i=0;i<N;i++)
					printf("%d  ",iscore[i]);
				for(i=0;i<N;i++)
				{
					if(iinsert>=iscore[i] && iinsert<=iscore[i+1])
						break;
					else if(iinsert<iscore[0])
					{
						i=0;break;
					}
					else if(iinsert>iscore[N-1])
					{
						i=N-1;break;
					}
				}
				for(k=N;k>i;k--)
					iscore[k]=iscore[k-1];
				iscore[i]=iinsert;
				printf("\n����������Ϊ��");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 5:  //delete
				printf("��������Ҫɾ���ڼ���������"); 
				scanf("%d",&idel);
				printf("ɾ��ǰ������Ϊ��\n");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				for(i=idel-1;i<=N;i++)
					iscore[i]=iscore[i+1];
				if(iscore[N]!=0)
					iscore[N]=0;
				printf("\nɾ���������Ϊ��\n");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 6:  //exit
				ibuer=1;break;
			default:
				printf("��Ч���룡���������룡");break;
		}
	}
}
