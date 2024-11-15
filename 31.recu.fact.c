#include<stdio.h>
int factorial(int n);

int main(){
    
    printf("factorial is : %d\n",factorial(5));
    return 0;
}
int factorial(int n){
    if (n == 1){
        return 1;
    }
    int factNm1 = factorial(n - 1);
    int factN = factNm1 * n;
    return factN;
}