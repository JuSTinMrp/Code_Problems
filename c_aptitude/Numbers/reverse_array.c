#include<stdio.h>
int main(){

    int a[20]={1,2,3,4,5,6,7,8}, count=0, b[20];
    for (int i=0;a[i]!='\0';i++){
        count++;
    }
    printf("%d\n", count);
    int j=0;
    for (int i=count-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    
}