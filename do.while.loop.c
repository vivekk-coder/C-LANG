#include<stdio.h>

int main(){

    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=num);


    return 0;
}