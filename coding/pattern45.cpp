#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=(i*i);j+=i)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
