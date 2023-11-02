#include<stdio.h>
int main(){

int n;
printf("Enter the range:");
scanf("%d",&n);

for (int i=0;i<=n;i++)
{
if (i%3!=0 && i%5!=0)
printf("%d is not divisible by 3 and 5\n",i);
}

}
