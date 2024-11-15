#include<stdio.h>
int main (){

    int age;
    printf("enter the age : ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("adult\n");
    }
    else if(age >=13 && age <=18)
    {
        printf("teenager\n");
    }
    else{
        printf("child\n");
    }
    printf("thankyou\n");

    // age >= 18 ? printf("adult \n ") : printf("not adult \n");
    
return 0;

}