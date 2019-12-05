#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the number n: ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("positive number");
	}
	else if(n<0)
	{
		printf("negative number");
	}
	else
	{
		printf("zeo number");
	}
}
