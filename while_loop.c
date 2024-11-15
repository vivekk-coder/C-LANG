// #include<stdio.h>
// int main(){
//     int i=1;

//      while(i<=10)

//      {
//         printf("%d\n",i);
//         i++; 
//      }

// return 0;

// }
#include<stdio.h>
int main(){

   int n,i = 1;
   printf("enter the number : ");
   scanf("%d",&n);

   // while(i <= n){
   //    printf("%d   \n",i);

   //    i++;
   // }

   do{
      printf("%d \n", i);
      i++;
   }while(i <= n);

   return 0;
}