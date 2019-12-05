#include<stdio.h>
int main()
{
	int a,b,m,n,first[10][10],second[10][10],sum[10][10];
	printf("enter the number of row and coulmn");
	scanf("%d%d",&a,&b);
	
	printf("enter the value of first matric");
	for(m=0;m<a;m++)
	{
		for(n=0;n<b;n++)
		{
			scanf("%d",&first[m][n]);
	}
}

	printf("enter the value of second matrix");
	for(m=0;m<a;m++)
	{
		for(n=0;n<b;n++)
		{
			scanf("%d",&second[m][n]);
	}
}

printf("the sum of matrix is:");
for(m=0;m<a;m++)
	{
		for(n=0;n<b;n++)
		{
			sum[m][n]=first[m][n]+second[m][n];
			printf("%d",sum[m] [n]);
		}
		printf("\n");
	}
}



