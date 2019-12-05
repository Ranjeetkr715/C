#include<stdio.h>
int main()
{
	int a ,b,i,hcf;
	printf("enter the number: ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=12 && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}
	}
	printf("%d",hcf);
}
