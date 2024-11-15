//use library functions to calculate the square of a number given by user.
#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("enter the number : ");
    scanf("%d",&number);
    
    int power = pow(number,2);

    printf("squire of a number is : %d\n", power);
    
    return 0;
}