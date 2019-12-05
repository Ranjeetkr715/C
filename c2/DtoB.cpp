//Decimal to binary
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j,arr[100];
	printf("enter the decimal number: ");
	scanf("%d",&n);
	int i=0;
	while(n>0)
	{
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=3;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	
}
