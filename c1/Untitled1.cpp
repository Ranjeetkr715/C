#include<stdio.h>
#include<conio.h>
int change(int x)
{
	printf("before adding value inside the function is %d\n",x);
	x=x+100;
	printf("after addin value inside the function is %d\n",x);
}
int main()
{
	int x=100;
	printf("before function call x=%d\n",x);
	change(x);
	printf("after function call x=%d\n",x);

}
