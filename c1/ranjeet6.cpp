#include<stdio.h>
#include<conio.h>
int main()
{
	int n ,sum=0,i;
	printf("enter the n number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of value is %d",sum);
}
