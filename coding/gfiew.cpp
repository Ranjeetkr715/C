#include <stdio.h>
 
int main()
{
   int n=4,s=3;
  for(int i=1;i<n;i++)
  {
      for(int j=1;j<=i;j++)
      	printf("%d",s);
      s++;
      printf("\n");
  }
  s--;
   for(int i=n;i>1;i--)
  {
      for(int j=1;j<i;j++)
      	printf("%d",s);
      s--;
      printf("\n");
  }
   return 0;
}
