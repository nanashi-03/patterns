#include<stdio.h>
int main()
{
	int i, j, k, n, a=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1; j<=i; j++)
		{
			a++;
			printf("%2c",a+64);
		}
		printf("\n");
	}
    for(i=1;i<=n;i++)
    {
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
        for(j=1;j<=n-i+1;j++)
        {
            a++;
			printf("%2c",a+64);
        }
        printf("\n");
    }
	return 0;
}
