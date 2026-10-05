/*
7. Reverse an Array
*/

#include<stdio.h>
int main(void){
    int s,x=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&s);
    int a[s];
    printf("enter the elements: ");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("Before Reversed array: ");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<s/2;i++){
        x=a[i];
        a[i]=a[s-1-i];
        a[s-1-i]=x;
    }
    printf("\nAfter Reversed array: ");
    for(int i=0;i<s;i++){
        printf("%d ",a[i]);
    }
}