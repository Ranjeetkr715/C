 #include <stdio.h>
 #include<stdlib.h>
// void reverse(int);
    int main()
	 {
	 	int i=1;
        reverse(i);
        
       
    }

 void reverse(int i){
        if (i > 5)
            exit(0);
        printf("%d\n", i);
       reverse(++i);
    }
