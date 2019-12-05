#include<stdio.h>
#include<math.h>
int main()
{
	int base,expo;
	int result=1;
	
	printf("enter the base and  expo : ");
	scanf("%d%d",&base,&expo);
	
  result=pow(base,expo);
//  	while(expo>0)
//	{
//		result*=base;
//		expo--;
//	}
//  
	printf("result is %d",result);
}
