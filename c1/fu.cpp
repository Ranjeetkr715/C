#include<stdio.h>
#include<conio.h>
int main()
{
  int n,r,i,sum=0,fact;
  printf("enter the n number: ");
  scanf("%d",&n);
  while(n>0)
  {
  	r=n%10;
  	fact=1;
  	for(i=1;i<=r;i++)
  	{
  		fact=fact*i;
   }
	 sum+=fact;
	 n=n/10;
  }
  if(sum=n)
  {
   printf("strong number");
}
else
{
	printf("no is not Strong");
}
}
