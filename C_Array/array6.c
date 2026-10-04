/*
6. Search for an Element
*/

#include<stdio.h>
int main(void){
    int s,se,x=0;
    printf("Enter the number of inputs: ");
    scanf("%d",&s);
    printf("Enter the number of find: ");
    scanf("%d",&se);
    int a[s];
    printf("enter the elements:\n");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++){
        if(se==a[i]){
            x=i;
            break;
        }
    }
    printf("Index of the number in array: %d",x+1);
}