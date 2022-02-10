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
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			if(j%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
    {
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
        for(j=1;j<=n-i+1;j++)
        {
            if(j%2==0)
				printf("1");
			else
				printf("0");
        }
        printf("\n");
    }
	return 0;
}
