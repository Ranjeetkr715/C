//binary to decimal
#include<stdio.h>
#include<math.h>
int main()
{
	int n,rem,sum=0;
	printf("enter the binary number: ");
	scanf("%ld",&n);
	int i=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*pow(2,i);
		n=n/10;
		i++;
	}
	printf("the decimal number is %d",sum);
}
