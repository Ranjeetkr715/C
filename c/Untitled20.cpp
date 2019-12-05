//cheaking if  given year is leap or not
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter the year: \n");
	scanf("%d",&n);
	if((n%400==0)||(n%4==0 && n%100!=0))
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}
