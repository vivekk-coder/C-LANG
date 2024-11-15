#include<stdio.h>
// the sum of n natural num. and print them also reverse number 
int main(){

    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    
    int sum = 0;
   for(int j=num; j>=1; j--){

    sum +=j;
    printf("%d\n", j);

   }
    printf("the sum of n natural num is : %d\n", sum);
    return 0;
}
