#include<stdio.h>
void main()
{
    int year;
 
    printf("Enter a year \n");
    scanf("%d", &year);
    if (((year % 400) == 0)||(((year%4)==0)&&(year%100)!=0))
        printf("%d is a leap year \n", year);
    else
        printf("%d is not a leap year \n", year);
}

// - Reversing the array  [x]
// - 2 power n  
// - GCD  
// - palindrome  [x]
// - count the negative numbers in a integer array  [x]
