#include<stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<n-i+1;k++)
		{
			printf("   ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%2d%d",i,j);
		}
		for(j=1; j<=i; j++)
        {
        	printf("%2d%d",i,j);
		}
		printf("\n");
	}
	return 0;
}
