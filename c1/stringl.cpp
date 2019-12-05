#include<stdio.h>
int main()
{
	char ch[30];
	int i,count=0;
	printf("enter the String:");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	 {
	 	count++;
	 }
	 
	 printf("length of string is %d",count);
	printf("\n");
}
