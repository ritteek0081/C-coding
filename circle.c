#include<stdio.h>
int main(void){
    int r;
    printf("Enter radius:");
    scanf("%d",&r);
    printf("Area = %.2f", 3.14*r*r);
    printf("\nCircumfrence : %.2f",2*3.14*r);
}