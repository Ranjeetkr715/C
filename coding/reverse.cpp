#include<stdio.h>
#include<String.h>
int main()
{
	int i=0,j,temp;
	unsigned int l;
	char ch[100];
	printf("enter the String: ");
	gets(ch);
	l=strlen(ch)-1;
	
	for(i=0;ch[i]!='\0';i++)
	{
		temp=ch[i];
		ch[j]=temp;
		ch[i]=ch[j];
		i++;
		j--;
	}
	printf("%d",ch[i]);
	
	
	
}
