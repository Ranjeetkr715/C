#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,sum=0,c;
	printf("entr the n number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
	sum=sum+c;
	n=n/10;
}
	printf("armstrong number is %d",sum);
	return 1;
}
