//hexdecimal to decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	int i=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*pow(16,i);
		n=n/10;
		i++;
	}
	printf("decimal no is %d: ",sum);
}
