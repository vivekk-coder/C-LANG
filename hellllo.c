#include<stdio.h>
int main ()
{
   int n;
   printf("enter the number : ");
   scanf("%d",&n);
    int table;
    for(int i = 10; i>=1; i--){
         if (i==3){
            break;
        }
         if (i==8){
            continue;;
         }
        table = n*i;
       
printf("%d\n",table);
    }
    
    return 0;
}