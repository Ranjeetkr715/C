#include<stdio.h>
int main()
{
	int a,b,i,j,first[100][100],second[100][100],add[100][100];
	printf("enter the no of row and coulmn: ");
	scanf("%d%d",&a,&b);
	
	printf("enter the element in first matrix: ");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	
		printf("enter the element in second matrix: ");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	
	printf("print addition matrix");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			add[i][j]=first[i][j]*second[i][j];
			printf("%d",add[i][j]);
		}
			printf("\n");
	}

	
}
