#include<stdio.h>
int main(int argc,char *argv)
{
	printf("name of the program is %s \n",argv[0]);
	
	if(argc==2)
	{
		printf("\n value given by user %s"args[1]);
	}
	
	else if(argc >2)
	{
		printf("\n many value given by user\n");
	}
	else
	{
		printf("\n single value expected \n");
	}
}
