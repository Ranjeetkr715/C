#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("before swaoing of number is a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("after swaping of the number is a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	
}
