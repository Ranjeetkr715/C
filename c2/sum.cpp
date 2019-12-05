#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter the number: ");
	scanf("%d",&n);
    int temp=n;
    
	for(i=1;i<n;i++)
	{
	if(n%i==0)
	{
		sum=sum+i;
	}
	}
if(sum==temp)
{
	printf("perfect number");
}
else
{
	printf("not a perfect number");
}
}
