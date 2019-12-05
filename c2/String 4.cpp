#include<stdio.h>
int main()
{
	char str[100];
	int i,len=0;
	printf("emter the String: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	printf("length of string is %s=%d",str,len);
}
