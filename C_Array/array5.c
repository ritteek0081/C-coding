/*
5. Count Positive, Negative and Zero
*/

#include<stdio.h>
int main(void){
    int s,p=0,n=0,z=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else{
            z++;
        }
    }
    printf("Positive Elements: %d | Negative Elements: %d | Zero Elements: %d",p,n,z);
}