#include<stdio.h>

int find(int a);
int check(int final[], int len);

int main(){
    int a, result;
    scanf("%d", &a);
    result=find(a);
    printf("%d", result);
}

int find(int a){
    int temp=a, arr[20], i=0, len;
    while (temp>0){
        arr[i]=temp%10;
        temp=temp/10;
        i++;
    }
    len=i;
    for (i=0;i>len;i++){
        if (arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    return check(arr, len);

}

int check(int final[], int len){
    int result=0;
    for (int i=0;i<len;i++){
        result=result*10 + final[i];
    }
    return result;
}