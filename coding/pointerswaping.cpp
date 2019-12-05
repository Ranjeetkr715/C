#include<stdio.h>

int swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int a,b;
	printf("enter the number: ");
	scanf("%d%d",&a,&b);
	printf("before swaping: ");
	swap(&a,&b);
	printf("after swaping %d and %d",a,b);
}
