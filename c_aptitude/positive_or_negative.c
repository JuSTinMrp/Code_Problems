#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);        // use float to get correct results (-0.1)
    if (a>0){
        printf("Positive Number");
    }
    else if (a<0){
        printf("Negative Number");
    }
    else
    printf("Neither Positive or Negative");
}
