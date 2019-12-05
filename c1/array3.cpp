//what is the largest element in array
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[]={7,13,21,16,9,31,24}; 
	int i,large;
	large=arr[0];
	for(i=0;i<7;i++)
	{
	  if(arr[i]>large)
	  {
	  	large=arr[i];
	  }
	  	}
	  	printf("larger element is %d\n",large);
}
