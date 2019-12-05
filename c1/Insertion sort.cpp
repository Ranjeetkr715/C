#include<stdio.h>
int main()
{
	int i ,key,j;
	int a[]={5,3,7,12,9,24,14,6,5,15};
	for(i=1;i<10;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>a[i])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	
	for(i=0;i<10;i++)
	{
		printf("sorted element is %d \n",a[i]);
	}
}
