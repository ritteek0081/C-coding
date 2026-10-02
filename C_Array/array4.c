/*
4. Count Even and Odd Elements
*/

#include<stdio.h>
int main(void){
    int n,o=0,e=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("Even Elements: %d | Odd Elements: %d",e,o);
}