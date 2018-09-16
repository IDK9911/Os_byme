#include <stdio.h>
#include <stdbool.h>
void main()
{int i,j;
int a[5][5],am[5][5],an[5][5],av[1][1];
bool d[5]={false,false,false,false,false};
/*
for(i=0;i<5;i++)
	{
	printf("%d\n",d[i]);
	}

for(i=0;i<5;i++)
	{
	printf("enter allocation for a b c for process %d:",i+1);
	scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}

for(i=0;i<5;i++)
	{
	printf("enter max for a b c for process %d:",i+1);
	scanf("%d%d%d",&am[i][0],&am[i][1],&am[i][2]);
	}
*/
a[0][0]=0	; a[0][1]=1	;a[0][2]=0	;
a[1][0]=2	; a[1][1]=0	;a[2][2]=0	;
a[3][0]=3	; a[3][1]=0	;a[3][2]=2	;
a[4][0]=2	; a[4][1]=1	;a[4][2]=1	;
a[5][0]=0	; a[5][1]=0	;a[5][2]=2	;

am[0][0]=7	; am[0][1]=5	;am[0][2]=3	;
am[1][0]=3	; am[1][1]=2	;am[2][2]=2	;
am[3][0]=9	; am[3][1]=0	;am[3][2]=2	;
am[4][0]=2	; am[4][1]=2	;am[4][2]=2	;
am[5][0]=4	; am[5][1]=3	;am[5][2]=3	;


for(i=0;i<5;i++)
	{
	
	an[i][0]=am[i][0]-a[i][0];
	an[i][1]=am[i][1]-a[i][1];
	an[i][2]=am[i][2]-a[i][2];
	}
av[0][0]=3;
av[0][1]=3;
av[0][2]=2;

for(j=0;j<5;j++)
{
for(i=0;i<5;i++)
	{
	if(av[0][0]>=an[i][0] && av[0][1]>=an[i][1] && av[0][2]>=a[i][2])
		{printf("%d>=%d && %d>=%d && %d>=%d",av[0][0],an[i][0],av[0][1],an[i][1],av[0][2],an[i][2]);
		if(d[i]==false)
			{
			av[0][0]=av[0][0]+a[i][0];
			av[0][1]=av[0][1]+a[i][1];
			av[0][2]=av[0][2]+a[i][2];
			d[i]=true;
			break;
			}
		}
	}
}
printf("%d,%d,%d",av[0][0],av[0][1],av[0][2]);

}		

