#include <stdio.h>
int x = 0;
void main(){
    int const a=10;
int *const ptr = &x;
printf("%p\n", ptr);
a=5;
printf("%d\n ",a);
}