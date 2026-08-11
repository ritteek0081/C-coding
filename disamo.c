#include<stdio.h>
int main(void){
    int a;
    float d,da;
    printf("Enter amount and discount :");
    scanf("%d%f",&a,&d);
    da=(d/100)*a;
    printf("final amount: %.2f",a-da);
}