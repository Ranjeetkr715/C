#include<stdio.h>
int main()

{
	int i,n;
	int arr[100];
	int item=10;
	int position=3;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	arr[position-1]=item;

//printf("update the %d element %d at postion",item,3);

	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
