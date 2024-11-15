#include<stdio.h>
int main (){
    // NESTED IF ELSE
    int number; 
    printf("enter the number : ");
    scanf("%d",&number);
    if(number >= 0){
        printf("this is positive number\n");

        if(number % 2 == 0){
            printf("%d num is even number", number);
        }
        else{
            printf("%d  num is odd number", number); 
        }
    }
    else{
        printf("this is negative number\n");

        if(number % 2 == 0){
            printf("%d num is even number", number);
        }
        else{
            printf("%d num is odd number", number);
    }
}
return 0;
}