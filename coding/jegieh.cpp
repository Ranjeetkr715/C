#include<stdio.h>
int main()
{
  int s=1,d=1,i,res=0;
  int n=10;
  for(i=1;i<=n;i++)
  {
 	printf("%d,",s);
//  	res+=s;
  	s=s+d;
  	d=d+2;
}
	
//	printf("%d",res);	
	}

