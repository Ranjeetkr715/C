#include<stdio.h>
#include<conio.h>
int main()
{
	int large,i;
	int a[7]={7,13,21,16,9,31,24};
	large=a[0];
	for(i=1;i<=5;i++)
	{
	if(a[i]>large)
	{
		large=a[i];
	}
}
	printf("%d",large);
	

}
