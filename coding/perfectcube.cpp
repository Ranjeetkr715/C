#include<stdio.h>
#include<String.h>
#include<math.h>
int main()
{
	int num;
	int num1;
	printf("enter the number: ");
	scanf("%d%d",&num,&num1);
	int r1=num/num1;
	int r2=r1/num1;

	
//	count=pow(num,num1);
	
	if(num==r2*r2*r2)
	{
		printf("perfect cube");
	}
	else
	{
		printf("not a perfect number");
	}
}
