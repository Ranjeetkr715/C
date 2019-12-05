#include<stdio.h>
#include<string.h>
int main()
{
	char ch [100];
	char ch1[100];
	printf("enter the string if it is pallindroe: ");
	gets(ch);
    strcpy(ch1,ch);
	strrev(ch1);
	if(strcmp(ch,ch1)==0)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not a pallindrome");
	}
	return 0;
}
