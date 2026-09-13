/*
Convert date to day count
Input date and calculate approximately how many days remaining in month.
*/

#include<stdio.h>
int main(void){
    int d,m,y;
    printf("Enter date by DD MM YYYY:");
    scanf("%d%d%d",&d,&m,&y);
    printf("%d %d %d\n",d,m,y);
    if(d<0||m<0||d>=31||m>=12){
        printf("invalid");
    }
    else if(m!=2){
        if(m==4||m==6||m==9||m==11){
            printf("Remaining days in that month: %d",30-d);
        }
        else{
            printf("Remaining days in that month: %d",31-d);
        }
    }
    else{
        if((y%4==0 && y%100!=0) || y%400==0){
            printf("Remaining days in that month: %d",29-d);
        }
        else{
            printf("Remaining days in that month: %d",28-d);
        }
    }
}