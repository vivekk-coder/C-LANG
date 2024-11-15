#include<stdio.h>
int main(){
    //print reverse of  the table for a number n.
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    int reverse_table;
    for(int i = 10; i>=1; i--){
        reverse_table = n*i;
           printf("%d\n", reverse_table);
    }
 
    return 0;
}