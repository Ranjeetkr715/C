#include<stdio.h>
#include<String.h>
int main()
{
	char str[]="ranjeet";
	reverse(str);

}

int reverse(char str[])
{
	for(int i=strlen(str)-1;i>=0;i--)
	{
		putchar(str[i]);
	}
}
