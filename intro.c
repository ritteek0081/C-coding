#include<stdio.h>
int main(void){
    char name[10];
    int age;
    printf("Enter name :");
    scanf("%s",&name);
    printf("enter age :");
    scanf("%d",&age);
    printf("My name is %s and I am %d years old.",name,age);
}