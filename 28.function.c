#include<stdio.h>
//declaration prototype 
void bonjour();
void namaste();

//function call
int main (){
     printf("enter f for french & i for indian :");
     char ch;
     scanf("%c",&ch);
     if(ch == 'i'){
        namaste();
        }
        else if(ch == 'f'){
            bonjour();
        }
        else{
            printf("wrong character");
        }
     
    return 0;
}
//function declaration 
void namaste(){
    printf("you are indian ");
}

void bonjour(){
    printf("you are french");
}