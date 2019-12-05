#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the n year: ");
	scanf("%d",&n);
	if((n%400==0) || (n%4==0 && n%100!=0))
	{
		printf("leap yera");
	}
	else
    printf(" not a leap year");
}
