#include <stdio.h>
void main()
{
int k, i,j, at[5], bt[5], nat[5],nbt[5];
for (i=0;i<5;i++)
	{
		
	printf("enter arrival time and burst  time of process %d:",i+1);
	scanf("%d%d",&at[i],&bt[i]);
	
	
	}
printf("\nthe arrival time");
printf("\n\tthe burst time\n");
for(i=0;i<5;i++)
	{
	printf("%d\t%d\n",at[i],bt[i]);
	}
k=0;
for(i=0;k!=5;i++)
	{
	for(j=0;j<5;j++)
		{
		if(at[j]==i)
			{
			nat[k]=at[j];
			nbt[k]=bt[j];
			k++;
			}
		}
	}
printf("\nthe new arrival time");
printf("\n\tthe new burst time\n");
for(i=0;i<5;i++)
	{
	printf("%d\t%d\n",nat[i],nbt[i]);
	}



}

