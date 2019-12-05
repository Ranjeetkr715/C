#include<stdio.h>
#include<conio.h>
int main()
{
	int i,fact=1,n;
	printf("enter the number n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial number is %d",fact);
}
