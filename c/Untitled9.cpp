#include<stdio.h>
#include<conio.h>
 int main()
{
  int i,j,k,n;
  printf("enter the number: ");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	 for(j=1;j<=n-i;j++)
 	 {
 	 	printf(" ");
 	 }
 	 	for(k=1;k<=i;k++)
 	 	{
 	 	printf("*");
	  }
	  printf("\n");
}
}
