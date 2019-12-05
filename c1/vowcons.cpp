#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int a,b;
	
	printf("enter the alphabet chracter: ");
	scanf("%c",&ch);
	
      a=( ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch =='u');
      b=(ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U');
	
	if(a || b)
	{
		printf("vowel",ch);
	}
   else
   {
   	printf("consonent",ch);
	   }	
}
