#include<stdio.h>
#include<String.h>
int main()
{
	char ch[100];
	int i,j,temp;
	printf("enter the String");
	gets(ch);
	 i = 0;
    j = strlen(ch) - 1;	
	
     while(i<j)
     {
     	temp=ch[i];
     	ch[i]=ch[j];
     	ch[j]=temp;
     	i++;
     	j--;
	 }
	 printf("reverse String is :%s",ch);
	 return (0);
	
	
	
}
