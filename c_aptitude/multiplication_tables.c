#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &b, &a);
    // scanf("Enter tables limit: %d", &a);
    for (int i=1;i<=a;i++){
        printf("%d x %d = %d\n", i, b, i*b);
    }
}