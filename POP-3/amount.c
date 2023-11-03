#include<stdio.h>
int main(){
    int days,veg_per,nonveg_per;
    printf("Enter no.of days & no.of veg_person & no.of non-veg_person\n");
    scanf("%d %d %d",&days,&veg_per,&nonveg_per);

    int veg_buff,nonveg_buff,veg,nonveg;
    float discount;
    if (days == 4)
    {
        // printf("True");
        discount = 0.1;
    }
    // printf("%f",discount);
    
    switch(days)
    {
        case 1:
        case 7: veg_buff=850;nonveg_buff=950;veg=veg_buff-(discount*veg_buff);nonveg=nonveg_buff-(discount*nonveg_buff);break;
        case 2 ... 6:
        veg_buff=750;nonveg_buff=850;veg=veg_buff-(discount*veg_buff);nonveg=nonveg_buff-(discount*nonveg_buff);break;
        default:
        printf("\nInvalid day entered");
    }

    if ((veg_per+nonveg_per)>=8 && (veg_per+nonveg_per)<16)
    {
        // printf("True");
        if (veg_per == nonveg_per){
            // printf("True");
            nonveg_per-=1;
        }
        else if (veg_per > nonveg_per)
        {
            veg_per-=1;
        }
        else if (veg_per < nonveg_per){
            nonveg_per-=1;
        }

    }
    else if ((veg_per+nonveg_per)>=16 && (veg_per+nonveg_per)<24)
    {
        if (veg_per == nonveg_per){
            nonveg_per-=2;
        }
        else if (veg_per > nonveg_per)
        {
            veg_per-=2;
        }
        else if (veg_per < nonveg_per){
            nonveg_per-=2;
        }
    }
    else if ((veg_per+nonveg_per)>=24)
    {
        if (veg_per == nonveg_per){
            nonveg_per-=3;
        }
        else if (veg_per > nonveg_per)
        {
            veg_per-=3;
        }
        else if (veg_per < nonveg_per){
            nonveg_per-=3;
        }
    
    }
    

    float tol_veg_cost,tol_nonveg_cost;
    

    // printf("\n%d",veg);
    // printf("\n%d",nonveg);
    // printf("\n%d",veg_per);
    // printf("\n%d",nonveg_per);



    tol_veg_cost=veg*veg_per;
    tol_nonveg_cost=nonveg*nonveg_per;

    //printf("\n%.2f\n",tol_veg_cost);
    //printf("\n%.2f\n",tol_nonveg_cost);

    float final_amount;
    final_amount=tol_veg_cost+tol_nonveg_cost;
    printf("\nRs. %.2f\n",final_amount);

}