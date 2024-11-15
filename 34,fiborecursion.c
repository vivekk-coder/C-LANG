#include<stdio.h>
// write a function to print n terms of the fibonacchi sequence

int fib(int n);

int main(){
    int fibonacchi = fib(8);
    printf("fibonacchi is : %d\n", fibonacchi);
    return 0;
}

int fib(int n){
    if (n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibNm1 = fib(n-1);
    int finNm2 = fib(n-2);
    int fibonacchi = fibNm1 + finNm2;
    return fibonacchi;
}
