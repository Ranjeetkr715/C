//how to find sum of all array of element
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int i,sum=0,n;
	printf("enter then number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of value of array %d\n",sum);
}
