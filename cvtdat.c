/*
Convert Days
Input a number of days and convert it into weeks and remaining days.
*/

#include<stdio.h>
int main(void){
    int n,rd;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    printf("Remaining days: %d weeks %d days",n/7,n%7);
}