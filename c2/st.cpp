#include<stdio.h>

struct Books
{
	char author[100];
	char book_name[100];
	int id;
};

int main()
{


struct Books b={"ranjeet","java",112};
printf("Books detail: \n");
printf("author:%s \n",b.author);
printf("Book_name:%s \n",b.book_name);
printf("id:%d \n",b.id);
}
