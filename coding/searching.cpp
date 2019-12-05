#include<stdio.h>
int main()
{
	int arr[100];
	int i,n;
	int item=3;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==item)
		{
		
		break;
	}
	}
	
	printf("found element %d at postion is %d",item,i);
//	for(i=0;i<n-1;i++)
//	{
//		printf("%d",arr[i]);
//	}
}
