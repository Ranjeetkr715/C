#include<stdio.h>
int main()
{
	int i ,n=4,j,s=3;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",s);
		}
		s++;
		printf("\n");
	}
     
	s--;
	for(i=n;i<=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",s);
		}
		s--;
		printf("\n");
	}
}
