#include<stdio.h>
#include<stdlib.h>
int main(){
    int a_h,a_m,s_h,s_m;
    scanf("%d %d %d %d",&s_h,&s_m,&a_h,&a_m);

    int a_time,s_time;
    a_time=(a_h*60)+a_m;
    s_time=(s_h*60)+s_m;


// printf("%d\n",a_time);
// printf("%d",s_time);

// printf("%d",abs(-10));
    int diff_time;
    diff_time=s_time-a_time;

    // printf("\n%d",diff_time);

    if (diff_time>0 && diff_time<30){
        printf("\nOntime");}
    else if (diff_time<0)
    {
        if (diff_time<-60){
            printf("\n%d:%02d hours after the start",abs(diff_time)/60,abs(diff_time)%60);
        }
        else{
            printf("\n%02d minutes after the start",abs(diff_time));
        }
    }
    
    else if(diff_time>30){
        if (diff_time<60){
            printf("\n%02d minutes before the start",abs(diff_time));
            
        }
        else{
            printf("\n%d:%02d hours before the start",abs(diff_time)/60,abs(diff_time)%60);
        }
    }
    }

