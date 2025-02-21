#include<stdio.h>

int main(){

    int SP,CP;

    scanf("%d %d",&CP,&SP);

    if(CP < SP){
        printf("Profit");
    }

    else if(CP > SP){
        printf("Loss");
    }

    else{
        printf("No Profit No Loss");
    }
}