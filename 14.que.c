#include<stdio.h>

int main(){
    int i=0, num;
    
    printf("enter the number : ");
    scanf("%d", &num);


    // for(; i<=num; i++){
    //     printf("%d\n", i);
    // }
   
    while(i <= num){
        printf("%d\n", i);
        i++;
    }

    return 0;

}