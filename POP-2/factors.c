#include<stdio.h>
int main(){
int i;
printf("Number: ");
scanf("%d",&i);
for (int c=2;c<=i;c++)
{
if (i%c==0){
printf("%d\n",c);
}
}
}
