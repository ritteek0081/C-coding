#include<stdio.h>
int main(void){
    float c,f;
    printf("Enter c and f :");
    scanf("%f%f",&c,&f);
    printf("c -> f :%f",(c*1.8)+32);
    printf("\nf -> c :%f",(f-32)/1.8);
}