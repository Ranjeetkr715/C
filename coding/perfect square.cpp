#include<stdio.h>
#include<String.h>
#include<math.h>
int main()
{
	int num;
	int num1=2;
	int count;
	printf("enter the number: ");
	scanf("%d",&num);
	
	count=pow(num,num1);
	
	if(count==num*num)
	{
		printf("perfect cube");
	}
	else
	{
		printf("not a perfect number");
	}
}
