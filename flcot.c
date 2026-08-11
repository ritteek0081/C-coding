/*
Fuel Cost
Input distance travelled, vehicle mileage, and fuel price. Calculate the fuel cost.
*/
#include<stdio.h>
int main(void){
    float d,m,p;
    printf("Enter d m p:");
    scanf("%f%f%f",&d,&m,&p);
    printf("fuel cost: %.2f",((d/m)*m)*p); //fuel cost=d*p;
}