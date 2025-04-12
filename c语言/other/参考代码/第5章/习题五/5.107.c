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
		printf("请输入你要进行的操作：");
		scanf("%d",&input);
		switch(input)
		{
			case 0:  //output 输出 
				printf("当前的数组为：\n");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				break; 
				
			case 1:  //input 输入，录入分数 
				printf("请输入十个分数：\n");
				for(i=0;i<N;i++)
					scanf("%d",&iscore[i]);
				printf("成绩录入后的数组为：\n");
				for(i=0;i<N;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 2:  //find，查找分数 
				printf("请输入一个你要查找的分数：");
				scanf("%d",&ifind);
				for(i=0;i<N+1;i++)
					if(iscore[i]==ifind)
					{
						printf("成绩为%d的学生是第%d个学生",ifind,i+1);
						break;
					}
				if(iscore[i]!=ifind)
					printf("成绩为%d的学生没找到",ifind);
				break;
				
			case 3:  //sort  升序排序，从小到大 
				printf("排序前的数组为：");
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
				printf("\n排序后的数组为：");
				for(i=0;i<N;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 4:  //insert 插入分数，保持升序不变 
				printf("请输入你要插入的分数：");
				scanf("%d",&iinsert);
				printf("\n插入前的数组为：");
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
				printf("\n插入后的数组为：");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 5:  //delete
				printf("请输入你要删除第几个分数："); 
				scanf("%d",&idel);
				printf("删除前的数组为：\n");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				for(i=idel-1;i<=N;i++)
					iscore[i]=iscore[i+1];
				if(iscore[N]!=0)
					iscore[N]=0;
				printf("\n删除后的数组为：\n");
				for(i=0;i<N+1;i++)
					printf("%d  ",iscore[i]);
				break;
				
			case 6:  //exit
				ibuer=1;break;
			default:
				printf("无效输入！请重新输入！");break;
		}
	}
}
