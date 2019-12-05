#include<stdio.h>
#include<string.h>
int main()
{
	 char ch[100];
	printf("enter the String: ");
	gets(ch);
	int i;
	for(i==0;ch[i]!='\0';i++)
	{
		ch[i]=ch[i]+32;
	}
//	int i=0;
//	while(ch[i]!='\0')
//	{
//		if(ch[i]>='A' && ch[i]<='Z')
//		{
//			ch[i]=ch[i]+32;
//		}
//		i++;
//	}
	printf("Change into lowercase is %s",ch);
	
}
