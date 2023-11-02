#include<stdio.h>
int main(){
int month,room_type,rooms,days;
printf("$1 $2 $3 $4\n\nMONTH: Choose 1-12\n\nROOM TYPE: \n1- BASIC\n2- STUDIO\n3- APARTMENT\n4- INDIVIDUAL VILLA\n\nNo.of Rooms:\n\nTotal no.of days:\n\n");

scanf("%d%d%d%d",&month,&room_type,&rooms,&days);

int charge,rent;
switch(room_type)
{
case 1:
charge=1000;
break;
case 2:
charge=2000;
break;
case 3:
charge=5000;
break;
case 4:
charge=8000;
break;
default:
printf("Invalid room_type");
break;
}
printf("%d",charge);

switch(month)
{
case 1:
case 2:
case 3:rent=5;break;

case 4:
case 5:rent=10;break;

case 6:
case 7:
case 8:
case 9:rent=20;break;

case 10:
case 11:rent=15;break;

case 12:rent=5;break;
default:
printf("Invalid Month");



}
printf("\n%d",rent);
printf("\n%d\n%d\n%d\n%d\n",month,room_type,rooms,days);

int Total_charges,discount;
discount= ((charge*rooms*days)*(rent/100.00));
printf("%d",discount);
Total_charges=(charge*rooms*days)-discount;
printf("\nTotal cost: %d",Total_charges);
}
