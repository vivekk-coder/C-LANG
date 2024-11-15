#include<stdio.h>
int main (){
    int marks;

    printf("enter the marks : ");
    scanf("%d", &marks);

    if (marks < 30){
        printf("GRADE C \n");
    }
    else if (marks >= 30 && marks < 70){
        printf("GRADE B \n");
    }
    else if (marks >= 70 && marks < 90){
        printf("GRADE A \n");
    }
    else if (marks >= 90 && marks < 100){
        printf("GRADE A+ \n");
    }
    else{
        printf("WRONG MARKS \n");
    }
    return 0;
