#include <stdio.h>

int sum(int a);
int sum(int a){
    if (a>0){
        return (a%10 + sum(a/10));
    }
    else{
        return 0;
    }
}

int main()
{
    int a,result=0;
    scanf("%d", &a);
    result = sum(a);
    printf("sum of digits: %d", result);
}

