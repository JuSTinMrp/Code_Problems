#include <stdio.h>

int main()
{
    int a,sum_even=0,sum_odd=0;
    scanf("%d", &a);
    for (int i=0;i<=a;i++){
        if (i%2 == 0){
            sum_even+=i;
        }
        else{
            sum_odd+=i;
        }
    }
    printf("Even sum: %d\n",sum_even);
    printf("Odd sum: %d",sum_odd);

}
