#include<stdio.h>

int main(){

    char n;

    scanf("%c",&n);

    if(n=='a'|| n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='0' || n=='U')
    printf("Vowel");

    else
    printf("Consonant");
}