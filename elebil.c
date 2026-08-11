/*
Electricity Bill - Basic 
Input units consumed and price per unit. Calculate the bill.
*/
#include<stdio.h>
int main(void){
    int n=0,a=0,x=0;
    float s=0;
    printf("Enter no of  unit:");
    scanf("%d",&n);
    while(n>0){
        if(n<51){
            a=1;
        }
        else if (n<151){
            a=2;
        }
        else{
            a=3;
        }
            switch (a)
            {
            case 1:
                x=n;
                s+=(x*0.5);
                n=0;
                break;
            case 2:
                x=n-50;
                s+=(x*1);
                n=50;
                break;
            case 3:
                x=n-150;
                s+=(x*1.5);
                n=150;
                break;
            default:
                printf("Invalid");
                break;
            }
    }
    printf("electricity bill: %.2f rupees",s);
}