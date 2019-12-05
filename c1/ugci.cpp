#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,sum=0;
	printf("enter the number is: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of number is %d",sum);
	
}

