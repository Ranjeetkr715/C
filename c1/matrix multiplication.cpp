#include<stdio.h>
int main()
{
	int a,b,i,j,first[10][10],second[10][10],multi[10][10];
	printf("enter the number of row and coulmn");
	scanf("%d%d",&a,&b);
	
	printf("enter rhe value of first row");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	
	printf("enter rhe value of second row");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			
			scanf("%d",&second[i][j]);
		}
	}
	
	printf("print the multiplication matrix");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			multi[i][j]=first[i][j]*second[i][j];
			printf("%d",multi[i][j]);
		}
		printf("\n");
	}
	
}
