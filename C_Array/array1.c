/*
1. Read and Display an Array
*/

#include<stdio.h>
int main(void){
    int n;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}