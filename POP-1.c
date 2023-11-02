#include<stdio.h>

int min_hrs(int X);

int min_hrs(int X){
	int hrs;
    if (X%60!=0){
    hrs=X/60;
    hrs+=1;}
    else{
    hrs=X/60;}
    return hrs;
}

int main(){
    int R1,R2,N,X,hrs;
    printf("Enter R1 cost: ");
    scanf("%d",&R1);
    printf("Enter R2 cost: ");
    scanf("%d",&R2);
    printf("Enter N (First few hrs): ");
    scanf("%d",&N);
    printf("Enter Total Time: ");
    scanf("%d",&X);

    hrs = min_hrs(X);
    printf("Total Time in hrs: %d",hrs);
    
    int first_cost,sec_cost,total_cost,rem_hrs;
    first_cost=R1*N;
    rem_hrs=hrs-N;
    sec_cost=R2*rem_hrs;
    total_cost=first_cost+sec_cost;
    printf("\nTotal Cost: %d",total_cost);
    return 0;
}
