#include<stdio.h>
int main(){
    int dividend,divisor;
    printf("Enter the number: \n");
    scanf("%d %d",&dividend,&divisor);

    // printf("%d %d",dividend,divisor);
    int count=0;
    while (dividend>=divisor){
        dividend-=divisor;
        count+=1;

    }

    printf("The quotient is %d",count);
}