#include<stdio.h>
int main()
{
	int i,j,num=1,number;
	printf("enter the number");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d* ",num);
			num++;
		}
		printf("\n");
		num=num+i;
	    i++;
	    
	    for(j=1;j<=i;j++)
	    {
	    	printf("%d* ",num);
	    	num--;
	    	
		}
		printf("\n");
		num=num+i+1;
	}	
}

