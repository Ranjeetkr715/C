#include<stdio.h>
#include<string.h>
int main()
{
	char ch [100]={'m','o','m','\0'};
	char ch1[100];

	strcpy(ch1=ch);
	strrev(ch1);
	if(strcmp(ch,ch1)==0)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not a pallindrome");
	}
}
