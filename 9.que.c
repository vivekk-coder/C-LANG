#include<stdio.h>
int main (){
    int marks;

    printf("enter the marks : ");
    scanf("%d", &marks);

    // if(marks > 30 && marks <= 100){
    //     printf("PASS\n");
    // }
    // else if(marks <= 30 && marks >= 0)
    // {
    //     printf("FAIL");
    // }
    // else
    // {
    //     printf("%d wrong marks", marks);
    // }

    marks <= 30 ? printf("FAIL\n") : printf("PASS\n");

    return 0;

}