#include <stdio.h>
#include <stdbool.h>
void main()
{int i,j;
int a[5][5],am[5][5],an[5][5],av[5][5];
bool d[5]={false,false,false,false,false};

for(i=0;i<5;i++)
	{
	printf("%d\n",d[i]);
	}
/*
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
a[1][0]=2	; a[1][1]=0	;a[1][2]=0	;
a[2][0]=3	; a[2][1]=0	;a[2][2]=2	;
a[3][0]=2	; a[3][1]=1	;a[3][2]=1	;
a[4][0]=0	; a[4][1]=0	;a[4][2]=2	;

am[0][0]=7	; am[0][1]=5	;am[0][2]=3	;
am[1][0]=3	; am[1][1]=2	;am[1][2]=2	;
am[2][0]=9	; am[2][1]=0	;am[2][2]=2	;
am[3][0]=2	; am[3][1]=2	;am[3][2]=2	;
am[4][0]=4	; am[4][1]=3	;am[4][2]=3	;

for(i=0;i<5;i++)
	{
	
	an[i][0]=am[i][0]-a[i][0];
	an[i][1]=am[i][1]-a[i][1];
	an[i][2]=am[i][2]-a[i][2];
	}
printf("Allocation of process:");
printf("\n\tA\tB\tC\n");
for(i=0;i<5;i++)
	{
	printf("p[%d]\t%d\t%d\t%d\n",i+1,a[i][0],a[i][1],a[i][2]);
	}
printf("Max of process:");
printf("\n\tA\tB\tC\n");
for(i=0;i<5;i++)
	{
	printf("p[%d]\t%d\t%d\t%d\n",i+1,am[i][0],am[i][1],am[i][2]);
	}
printf("need of process:");
printf("\n\tA\tB\tC\n");
for(i=0;i<5;i++)
	{
	printf("p[%d]\t%d\t%d\t%d\n",i+1,an[i][0],an[i][1],an[i][2]);
	}
/*now to find available*/
printf("the initial available is:");
av[0][0]=3;
av[0][1]=3;
av[0][2]=2;
printf("%d,%d,%d",av[0][0],av[0][1],av[0][2]);
for(j=0;j<5;j++)
	{printf("in the outer loop");
	for(i=0;i<5;i++)
		{printf("in the inner loop");
		if(av[0][0]>=an[i][0] && av[0][1]>=an[i][1] && av[0][2]>=an[i][2])
			{printf("%d>=%d && %d>=%d && %d>=%d",av[0][0],an[i][0],av[0][1],an[i][1],av[0][2],an[i][2]);
			printf("\nworking with which i :%d\n",i);
			if(d[i]==false)
				{
				printf("this is the av before\n%d\t%d\t%d\n",av[0][0],av[0][1],av[0][2]);
				printf("this is the a(i)\n%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2]);
				av[0][0]=av[0][0]+a[i][0];
				av[0][1]=av[0][1]+a[i][1];
				av[0][2]=av[0][2]+a[i][2];
				printf("this is the av after\n%d\t%d\t%d\n",av[0][0],av[0][1],av[0][2]);
			d[i]=true;
			break;
				}
			}
		}
	printf("this is the new\n%d\t%d\t%d\n",av[0][0],av[0][1],av[0][2]);
	for(i=0;i<5;i++)
	{
	printf("\n%d\n",d[i]);
	}
	}

}









