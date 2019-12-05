#include<stdio.h>
int main()
{
	int arr[10];
	int i,f_big ,s_big ,temp;
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	f_big=arr[0];
	s_big=arr[1];
	
	if(f_big>s_big)
	{
		temp=f_big;
		f_big=s_big;
		s_big=temp;
	}
	
	for(i=2;i<n;i++)
	{
		if(arr[i]>f_big)
		{
			s_big=f_big;
			f_big=arr[i];
		}
		else if(arr[i]>s_big)
		{
			s_big=arr[i];
		}
	}
	printf("first and second largest number %d and %d is: ",f_big,s_big);
	
}
