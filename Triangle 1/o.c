#include<stdio.h>
int main()
{
	int i, j, n, a=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1; j<=i; j++)
		{
			a++;
			printf("%5c",a+96);
		}
		printf("\n");
	}
	return 0;
}
