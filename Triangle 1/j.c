#include<stdio.h>
int main()
{
	int i, j, n, a=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i;
		for(j=1; j<=i; j++)
		{
			printf("%d", a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
