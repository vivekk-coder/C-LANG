
#include<stdio.h>
//declaration prototype

int sum(int a, int b);

//function call
int main (){
    int a,b;

    printf("enter the value of a : ");
    scanf("%d", &a);

       printf("enter the value of b : ");
    scanf("%d", &b);
    
    
int summ = sum(a, b);

printf("sum of %d & %d  is : %d ", a,b,summ);

    return 0;
}

//function declaration
int sum(int x, int y){

// int summ;
// summ = a + b;
return x + y;

}