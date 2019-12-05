#include<stdio.h>
#include<conio.h>
void swap(int,int);
int main()
{
	int a,b;
	a=10;
	b=20;
	printf("before swaping of number is a=%d,b=%d\n",a,b);
	swap(10,20);
	printf("after swaoing of the number is a=%d,b=%d\n",a,b);
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("value passes after the function is a=%d,b=%d\n",a,b);
}
