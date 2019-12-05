#include<stdio.h>
int main()
{
	int i,count=0;
//	Printf("enter the number:");
//	scanf("%d",&n);
int n=100;
	
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
	}
	if(count==2)
	{
		printf("%d",i);
	}
}
