#include <stdio.h> 


void FirstFactorial(int num) {
  
     int fact=1,i;
     for(i=1;i<=num;i++)
     {
       fact=fact*i;
     }
  printf("%d", fact);

}

int main(void) { 
   
   int num=4;
  FirstFactorial(num);
  return 0;
    
}
