#include <stdio.h>
int addNumbers(int num)
{
    if(num == 0)
        return num ;
    else
        return num + addNumbers(num-1);
    }

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d",addNumbers(num));
    return 0;
}
//int addNumbers(int num)
//{
//    if(num != 0)
//        return num + addNumbers(num-1);
//    else
//        return num;
//}
