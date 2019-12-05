#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	char s2[20];
	int i;
	unsigned int l1,l2;
	
	printf("enter the first string: ");
	gets(s1);
	
	printf("enter the second string: ");
	gets(s2);
	
	l1=strlen(s1);
	l2=strlen(s2);
	
	for(i=0;i<=l2;i++)
	{
		s1[i+1]=s2[i];
	}
	printf("combination of string is %s:",s1[i+1]);
	
}
