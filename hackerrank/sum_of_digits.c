#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum=0, dig;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0){
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    printf("%i", sum);
    return 0;
}
