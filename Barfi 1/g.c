#include<stdio.h>
int main()
{
	int i, j, k, n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%2d%d ",i,j);
		}
		printf("\n");
	}
    for(i=1;i<=n;i++)
    {
		for(k=1;k<i;k++)
		{
			printf("    ");
		}
        for(j=1;j<=n-i+1;j++)
        {
            printf("%2d%d ",i,j);
        }
        printf("\n");
    }
	return 0;
}
