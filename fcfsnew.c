#include <stdio.h>
void main()
{
int i,a,b,d,at[20],bt[20],ct[i];
int x;
at[0]=0;
ct[0]=0;
for(i=1;i<6;i++)

	{
	printf("enter the arrival and burst time of process %d:",i);
	scanf("%d%d",&a,&b);
	at[i]=a;
	bt[i]=b;
	
	}

a=0;
x=1;
for (i=1;i<6;i++)
	{

		while(x)
		{	printf("\t\t\t\t\nin the loop\n");
			if (at[1]-ct[0]!=0)								
				{
				d=at[i];
				x=0;
				continue;
				}
			else
				{
				x=0;	}
		}
		
	
	a=a+bt[i]+d;
	ct[i]=a;
	d=0;
	
	
	if (at[i+1]-ct[i]>0)
		{
		d=at[i+1]-ct[i];
		}
		
	}

printf("arrival time\n");
printf("\tburst time\n");
printf("\t\tcompletion time\n");
for (i=1;i<6;i++)
	{

	printf("%d\t%d\t%d\n",at[i],bt[i],ct[i]);
	}


}
