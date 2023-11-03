#include<stdio.h>
int main(){
    int n,flag;
    scanf("%d",&n);

    if (n==0 || n==1){
        // printf("True");
        flag=1;
    }
    else{
        // printf("True");
        for (int i=2;i<=n/2;i++){
            if (n==(i*i)){
                // printf("True");
                flag=1;
                // printf("%d",flag);
                break;
            }
            else{
                flag=0;
            }
        }
    }
    // printf("%d",flag);
    if (flag==1){
        printf("%d is perfect square",n);}
    else{
        printf("%d is not a perfect square",n);

    }

    }
