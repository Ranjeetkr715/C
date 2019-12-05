#include<stdio.h>
int main()
{
	int arr[100];
	int position;
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("enter the position: ");
	scanf("%d",&position);
	
	for(i=position;i<n;i++)
	{
		arr[i]=arr[i+1];
	}

	printf("enter the number");
	
	for(i=0;i<n-1;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
