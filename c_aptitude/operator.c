#include<stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d %c", &a,&b,&c);
    switch(c){
        case '+':
        printf("%d %c %d = %d", a,c,b,a+b);
        break;
        case '-':
        printf("%d %c %d = %d", a,c,b,a-b);
        break;
        case '*':
        printf("%d %c %d = %d", a,c,b,a*b);
        break;
        case '/':
        printf("%d %c %d = %f", a,c,b,(float)a/b);
        break;
        default:
        printf("Invalid Operator");
        break;
    }
}