#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter the range:");
scanf("%d",&n);

for (int i=0;i<=n;i++)
{
if (i%3==0 || i%5==0)
{
sum+=i;

}
}
printf("\nTotal sum: %d",sum);
}
