#include<stdio.h>
#include<String.h>

struct Books {
  char author[50];
  char subject[100];
  int book_id;
};

int main()
{
   struct Books b={"Ranjeet","java",1001};
  printf("Emp detail: \n");
  printf("author:%s\n",b.author);
  printf("subject:%s\n",b.subject);
  printf("book_id:%d\n",b.book_id);
	
	
}
