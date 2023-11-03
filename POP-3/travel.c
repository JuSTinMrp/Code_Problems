#include<stdio.h>
int main(){
    int km,day;
    printf("Enter km & day\n");
    scanf("%d %d",&km,&day);

    int charge,tot_charge;
    if (km<20){
        if (day == 0){
            charge=90;
        }
        else if(day == 1){
            charge=79;
        }
        
    }
    else if (km>=20 && km<100){
        charge=9;
    }
    else if (km>=100){
        charge=9;
    }
    // printf("%d",charge);
    tot_charge=charge*km;
    printf("Rs. %d",tot_charge);

}