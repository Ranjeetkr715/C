#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n, number=1;
	printf("enter the n number");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("%d*",number);
    		number++;
		}
		printf("\n");
	}
}
