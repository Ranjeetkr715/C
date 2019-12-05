#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,n;
	a=2;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	printf("%d\n",a);
	
}
