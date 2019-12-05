#include<stdio.h>
int main()
{
	int s=1,d=2,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",s);
		s=s+d;
		d=d+2;
	}

}
