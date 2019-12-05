#include<stdio.h>
int main()
{
	int num=100;
	int *pnum;
	pnum=&num;
//	num=100;
	
	printf("value of num:%d and address of num:%u",num,&pnum);
		printf("value of num:%d and address of num:%u",pnum,*pnum);
}
