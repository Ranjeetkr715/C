#include<stdio.h>
#include<conio.h>
int change(int x)
{
	printf("before adding number is %d \n",x);
	x+=100;
	printf("after adding of number is %d\n",x);
}
int main()
{
	int x;
	printf("enter the value of x: ");
	scanf("%d",&x);
	printf("before function calling number is %d \n",x);
	change(x);
	printf("after function calling number is %d\n",x);
}

