#include<stdio.h>
#include<conio.h>
void swap(int a,int b)
  {
    	int temp;
    	temp=a;
    	a=b;
    	b=temp;
    	printf("after calling the value is %d=a and %d=b\n",a,b);
	}
int main()
{
	int a=10;
	int b=20;
	printf("before swaaping of number a=%d and b=%d\n",a,b);
	swap(a,b);
	printf("after swaping of the number is %d=a and %d=b\n",a,b);
	}
	
  
