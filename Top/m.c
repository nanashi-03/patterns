#include<stdio.h>
int main()
{
	int i, j, n, k, a=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=1; j<=n-i+1; j++)
		{
			printf("%d",(i*j));
		}
		for(j=n-i+1;j>=1;j--)
		{
			printf("%d",(i*j));
		}
		printf("\n");
	}
	return 0;
}
