#include <stdio.h>

int main()
{
    int a,sum =0;
    scanf("%d", &a);
    int rem;
    while(a>0){
        rem=a%10;
        sum+=rem;
        a=a/10;
    }
    printf("sum of digits: %d", sum);
}

