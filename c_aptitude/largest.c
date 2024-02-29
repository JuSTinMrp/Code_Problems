#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a>b && a>c){
        printf("%d (a) is largest", a);
    }
    else if (a>b && a>c){
        printf("%d (b) is largest", b);
    }
    else if (a==b && b==c){
        printf("Equal numbers");
    }
    else{
        printf("%d (c) is largest", c);
    }
    
}
