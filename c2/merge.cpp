#include<stdio.h>
#include<String.h>
int main()
{ char ch[100];
  char ch1[100];
  int i,l1,l2;
	printf("enter the string: ");
	gets(ch);
	printf("enter the string: ");
	gets(ch1);
	
	l1=strlen(ch);
	l2=strlen(ch1);
	for(i=0;i<=l2;i++)
	{
		ch[l1+i]=ch1[i];
	}
	printf("string is %s:",ch);
}
