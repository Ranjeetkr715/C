#include<stdio.h>
int main()
{
	int i,j,temp;
	int a[10]={9,8,7,6,5,4,3,2,1,10};

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("print the number in sorted manner : ");
	for(i=0;i<10;i++)
	{
		printf("%d \n",a[i]);
	}
}
