#include<stdio.h>
int main()
{
	int arr[100];
	int n,i;
	int index=3;
	int value=7;
	printf("enter the number: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=n;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
      arr[index]=value;
      n++;
     printf("after insertion");
   
   for(i=0;i<n;i++)
   {
   	printf("%d",arr[i]);
   }
	
}
