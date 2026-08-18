/*
Convert Seconds
Input total seconds and convert them into hours, minutes, and seconds.
*/
#include<stdio.h>
int main(void){
    int s,m,h;
    printf("Enter the sec: ");
    scanf("%d",&s);
    h=(s/3600)*3600;
    m=((s-h)/60)*60;
    s=s-h-m;
    printf("Hour :%d Minutes :%d seconds :%d",h/3600,m/60,s);
}