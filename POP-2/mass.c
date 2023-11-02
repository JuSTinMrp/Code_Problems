#include<stdio.h>
int main(){
float h,w;
float Index_mass;
printf("Type the height and weight:");
scanf("%f %f",&h,&w);
printf("%f %f",h,w);

Index_mass=(((w/h)/h)*10000.00);
printf("\n%.2f",Index_mass);

if (Index_mass<18.5)
{
printf("\nUnderweight");}
else if (Index_mass>18.5 && Index_mass<24.9)
{
printf("\nHealthyweight");}
else if (Index_mass>24.9)
{
printf("\nObesity");}

}
