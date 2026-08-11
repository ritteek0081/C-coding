/*
Profit or Loss Percentage:
Input cost price and selling price. Calculate the profit/loss percentage.
*/
#include<stdio.h>
int main(void){
    float a,b;
    printf("Enter sell and cost amount: ");
    scanf("%f%f",&a,&b);
    if(a-b>=0){
        printf("profit = +%.2f %%",((a-b)/b)*100);
    }
    else{
        printf("loss = -%.2f %%",((b-a)/b)*100);
    }
}