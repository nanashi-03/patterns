#include<stdio.h>
int main()
{
	int i, j, n, a=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1; j<=n-i+1; j++)
		{
			a=(i+j)*(i+j);
			printf("%5d",a);
		}
		printf("\n");
	}
	return 0;
}
