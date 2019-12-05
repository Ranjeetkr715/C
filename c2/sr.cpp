#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5,13,7};
	int n,i,sum=0,large;
	large=arr[0];
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    if(arr[i]>arr[0])
	    {
	    	large=arr[i];
		}
	}
	printf("%d",large);
}
