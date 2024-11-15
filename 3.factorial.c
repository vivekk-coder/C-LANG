#include<stdio.h>
int main(){
   int a,i,c;
   c=1;
   
   printf("enter the number : ");
   scanf("%d",&a);

   for(i=1; i<=a; i++)
   
   {
   c = c*i;
   }
    printf("factorial of %d is %d",c,a);

   return 0;
}