#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number is: ");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap no is %d and %d: ",a,b);
}
