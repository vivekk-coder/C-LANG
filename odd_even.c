#include<stdio.h>
#include<math.h>
int main (){

    int x; 
    //even true-1
    //odd false-0

    printf("enter the number : ");
    scanf("%d",&x);
    printf("%d",x % 2 == 0);


    return 0;
}