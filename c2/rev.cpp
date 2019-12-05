#include<stdio.h>
#include<String.h>
int main()
{
	char ch[100];
	char ch1[100];
	unsigned int l;
	printf("enter the String: ");
	gets(ch);
	printf("enter the String: ");
	gets(ch1);
	l=strlen(ch);
	printf("the reverse no is %s: ",strrev(ch));
	printf("the reverse no is %d: ",l);
	ch=concate(ch1);
	printf("the merge string  is %s: ",ch;
	
}
