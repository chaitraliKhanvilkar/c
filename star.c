#include<stdio.h>

int main(int argc,char argv[])
{	
	int i,j;
	printf("Enter a level :");
	int level;
	scanf("%d",&level);
	for(j=1;j<=level;j++)
	{
		for(i=0;i<j;i++)
		{
			printf("*");
		}
	printf("\n");
	}
return 0;
}
