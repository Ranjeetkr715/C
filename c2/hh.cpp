#include<stdio.h>
int main()
{
	int arr[100];
	int n,j;
	printf("enter the number: ");
	scanf("%d",&n);
	int i=0;
	while(n>0)
	{
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=2;j>=0;j--)
	{
		printf("%d",&arr[j]);
	}
}
