//how to find naximum number between three number
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the thrre number:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>c)&&(a>b))
	{
		printf("%d",a);
	}
	else if(b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
}
