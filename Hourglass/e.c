#include<stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
        for(j=1;j<=n-i+1;j++)
        {
            printf("%d",j);
        }
        for(j=n-i+1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
	{
		for(k=1;k<n-i+1;k++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(j=i; j>=1; j--)
        {
        	printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
