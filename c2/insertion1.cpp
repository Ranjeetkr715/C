#include<stdio.h>
int main()
{
	int arr[10],i,position,value,n;
	printf("enter the number of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the value is: ");
	scanf("%d",&position);
	
	printf("enter the position: ");
	scanf("%d",&value);
	
	for(i=n-1;i>=position-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[position-1]=value;
	
	for(i=0;i<=5;i++)
	{
		printf("%d",arr[i]);
	}
}
