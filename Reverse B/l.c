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
			printf("   ");
		}
		for(j=1; j<=n-i+1; j++)
		{
			a=(i+j)*(i+j);
			printf("%3d",a);
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
    {
		for(k=1;k<n-i+1;k++)
		{
			printf("   ");
		}
        for(j=1;j<=i;j++)
        {
            a=((n-i+1)+j)*((n-i+1)+j);
			printf("%3d",a);
        }
        printf("\n");
    }
	return 0;
}
