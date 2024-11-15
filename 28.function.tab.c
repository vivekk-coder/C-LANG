#include<stdio.h>
void printtable(int n); //declaration prototype

int main (){// function call
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
   
    printtable(n);//argument / actual perameter.
return 0;

}
// function defination

void printtable(int n){// perameter / formal prameter

     
    for(int i=1; i<=10; i++){
      int table = n*i;

       printf("%d\n", table);
    }
}