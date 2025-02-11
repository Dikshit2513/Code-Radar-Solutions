#include<stdio.h>

int main(){

    char name[100];
    int age;
    char hobby[100];

    scanf("%s%d%s",&name,&age,&hobby);

    printf("name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);

}