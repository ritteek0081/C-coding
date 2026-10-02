/*
2. Find the Sum and Average of Array Elements
*/

#include<stdio.h>
int main(void){
    int n,s=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    s=s+a[i];
    }
    printf("Sum = %d | Average = %.2f",s,(float)s/n);
}