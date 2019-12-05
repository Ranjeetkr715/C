#include<stdio.h>
#include<conio.h>
int main()
{
	int n, count=0;
	printf("enter the n number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
	
		n=n/10;
		count++;
	}
	printf("the count value is %d",count);
}
