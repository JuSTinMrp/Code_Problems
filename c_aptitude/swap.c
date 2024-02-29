// 10 2

// a=10    b=a+b
// b=12    a= b-a
// a=2     b=b-a

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("a: %d\n b: %d\n\n", a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("a: %d\n b: %d", a,b);
}
