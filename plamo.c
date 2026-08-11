#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter sell and cost amount: ");
    scanf("%d%d",&a,&b);
    if(a-b>=0){
        printf("profit = +%d",a-b);
    }
    else{
        printf("loss = -%d",b-a);
    }
}