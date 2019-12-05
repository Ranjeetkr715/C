#include<stdio.h>
int main()
{
	int arr[10],i,position,n;
	printf("enter the number of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the postion is: ");
	scanf("%d",&position);
	
	for(i=position-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);
	}
}
