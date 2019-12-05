#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("enter the two number is: ");
	scanf("%d%d",&a,&b);
	
	temp=a;
	a=b;
	b=temp;
	printf("swaping no is %d and %d",a,b);
	
}
