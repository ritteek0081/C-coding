#include<stdio.h>
#include<math.h>
int main(void){
    float p,r,t;
    printf("Enter p r t : ");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple Intreset :%.2f",p*r*t);
    printf("\nCompound Intreset :%.2f",p*pow((1+r),t));
}