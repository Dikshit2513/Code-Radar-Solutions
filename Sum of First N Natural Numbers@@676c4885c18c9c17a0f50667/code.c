#include<stdio.h>

int main(){

    int n,c,sum=0;

    scanf("%d",&n);

    for(c=1;c<=n;c++){
        printf("%d ",c);
        sum=sum+c;
    }
}