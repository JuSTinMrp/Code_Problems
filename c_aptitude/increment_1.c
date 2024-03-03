#include<stdio.h>

int main(){
    int a,temp,rem,reverse=0;
    scanf("%d", &a);
    temp=a;
    while(temp>0){
        rem=temp%10;
        reverse=reverse*10 + rem+1;
        temp=temp/10;
    }
    printf("%d\n",reverse);
    
}