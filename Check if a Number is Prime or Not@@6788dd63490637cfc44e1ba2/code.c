#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    if(n%n==0 && n%1==0){
        printf("Prime");
    }

    else{
        printf("Not Prime");
    }
}