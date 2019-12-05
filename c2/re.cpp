#include<stdio.h>
#include<String.h>
int main()
{
	char ch[100];
	int len=0,i;
	printf("enter the String: ");
	gets(ch);
//	printf("The revrse number is %s: ",strrev(ch));

//    for(i=0;ch[i]!='\0';i++)
//    {
//    	len++;
//	}
	printf("length of String is %d",strlen(ch));
}
