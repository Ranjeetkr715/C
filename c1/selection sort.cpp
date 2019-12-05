#include<stdio.h>
int main()
{
	int i,j,min,temp;
	int a[7]={5,3,1,4,2,7,5};
	for(i=0;i<6;i++)
	{
		min=i;
		for(j=i+1;j<7;j++)
		{
			if( a[j]>a[i])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf("%d /n",a[i]);
	}
}
