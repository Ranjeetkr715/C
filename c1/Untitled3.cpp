#include<stdio.h>
void swap(int *a,int *b )
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swaping value in function is *a=%d,*b=%d\n",a,b);
}

int main()
{
	int a=10;
	int b=20;
	printf("before swaping the value is a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("after swaaping the value is a=%d,b=%d\n",a,b);
}

