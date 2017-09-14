#include <stdio.h>
int digits(int Y)
{
    if((Y/10000) == 1) return 5;
    else if(((Y/1000) >= 1) && (Y/1000) <= 9) return 4;
    else if(((Y/100) >= 1) && (Y/100) <= 9) return 3;
    else if(((Y/10) >= 1) && (Y/10) <= 9) return 2;
    else return 1;
}
int main()
{
 int number_of_digits = 0;   
 
 int Y = 1987;
 
 number_of_digits = digits(Y);
 
 printf("%d",number_of_digits);
}
