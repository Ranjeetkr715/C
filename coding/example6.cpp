#include<stdio.h>
int main()
{
	int i,j,n=5,s=1;
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
	s--;
	for(i=n;i>1;i--)
	{
	for(j=1;j<i;j++)
	{
		printf("%d",s);
	}
	s--;
	printf("\n");
    }
}
