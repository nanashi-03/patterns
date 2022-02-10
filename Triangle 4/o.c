#include<stdio.h>
int main()
{
	int i, j, k, n, a=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<n-i+1;k++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			a++;
			printf("%c",a+96);
		}
		printf("\n");
	}
	return 0;
}
