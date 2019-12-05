#include<stdio.h>
int main()
{
	int a ,b ,i,lcm;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	
	int max=a>b?a:b;
	i=max;
	while(1)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
	
	}
	printf("%d",lcm);
	return 1;
}
