#include<stdio.h>

int main(){
    int n,c,table;

    scanf("%d",&n);

    for(c=1;c<=10;c++){
        table=n*c;
    
    printf("%d x %d = %d\n",n,c,table);
    }
}