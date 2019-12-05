#include<stdio.h>
int fact(int *x)
{
	*x=*x+100;
	printf("after modification function call value of x is %d: ",x);
	
}
int main()
{
	int x;
	printf("enter the value of x: ");
	scanf("%d",&x);
	printf("before function call value of x is %d: ",x);
	fact(&x);
	printf("after function call value of x is %d: ",x);
	
}
