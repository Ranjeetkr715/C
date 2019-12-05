#include<stdio.h>
#include<String.h>
int main()
{
	long l;
	int r,result=0;
	printf("enter the number: ");
	scanf("%ld",&l);
	int i=0;
	while(l>0)
	{
		r=l%10;
		result= result+r*pow(2,i);
		l=l/10;
		i++;
	}
	printf("%ld",result);
	
}
