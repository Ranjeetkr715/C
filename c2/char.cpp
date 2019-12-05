#include<stdio.h>
int main()
{
	char ch='A';
	int n,i,j;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		
		}
		ch++;
	
		printf("\n");
	}
}
