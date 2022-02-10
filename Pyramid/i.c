#include<stdio.h>
int main()
{
	int i, j, n, k, a=0;
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
			if(a%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}for(j=1; j<=i; j++)
        {
        	a++;
			if(a%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
