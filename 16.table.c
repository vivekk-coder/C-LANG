#include<stdio.h>
int main(){

    //table of any number 

    int n;
     printf("enter the number : ");
    scanf("%d", &n);
    
// for loop ...break statement
    // for(int i = 1; ; i++)
    // {
    //     if(i==11){
    //         break;
    //     }
    //     int table = n*i;
    //     printf("%d\n",table);
    // }

// while loop
    //   int i=1;
    // while(i<=10){
    //     int table = n*i;
    //     printf("%d\n",table);
    //     i++;
    // }

// do while loop
    
    int i = 1;
    do{
       
        
       int table = n*i;
        printf("%d\n", table);
        i++;
    }while(1);

    return 0;
}