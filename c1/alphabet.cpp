#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	char ch='A';
	printf("enter the number n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		ch='A';
	printf("\n");	
	}
	
}
