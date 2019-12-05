#include<stdio.h>
int main()
{
	int a[]={3,5,7,4,2};
	int i,j,n,temp;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the shorted order is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
