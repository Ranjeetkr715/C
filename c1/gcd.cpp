#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,gcd,i;
	printf("enter the two number a and b: ");
	scanf("%d%d",&a,&b);
	
	for(i=1; i<=a && i<=b ;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd =i;
		}
	}
	printf("the gcd is %d is",gcd);
}
