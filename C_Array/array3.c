/*
3. Find the Largest and Smallest Element
*/

#include<stdio.h>
int main(void){
    int n,m=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<s){
            s=a[i];
        }
    }
    printf("Max = %d | Min = %d",m,s);
}