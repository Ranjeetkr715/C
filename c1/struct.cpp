#include<stdio.h>
#include<string.h>
struct books
	{
		char name[100];
		char author[100];
		char subject[100];
		int id[20];
	};
	
int main()
{
	struct books book1;
    struct books book2;
    
     strcpy(book1.name, "c programming");
     strcpy(book1.author, "ranjeet"); 
	 strcpy(book1.subject, "c language");
	 book1.book_id = 454394;
	 
	 
	  strcpy(book2.name, "java programming");
     strcpy(book2.author, "suchit"); 
	 strcpy(book2.subject, "java language");
	 book2.book_id= 4543994;
	 
	 
	 printf("book1 name is:%s",book1.name);
	 printf("book1 author name is:%s",book1.author);
	 printf("book1 subject is:%s",book1.subject);
	 printf("book id id:%d",book1.id);
	 
	 
	 printf("book2 name is:%s",book2.name);
	 printf("book2 author name is:%s",book2.author);
	 printf("book2 subject is:%s",book2.subject);
	 printf("book id id:%d",book2.id);
	 
	 return 0;
	 
	 
	 
}
	
	
	

