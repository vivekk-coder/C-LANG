#include<stdio.h> 
int main(){
    
    // int age = 33;
    // int *ptr = &age;
    // // int _age = *ptr;
    // printf("%d, %d, %d",ptr, *ptr, &age);
    // return 0;

int age = 22;
int *ptr = &age;
// printf("%p\n",&age );

printf("%u\n",&age);
printf("%u\n",ptr);
printf("%u",&ptr);



printf("%d\n",age);
printf("%d\n",*ptr);
printf("%d\n",*(&age));



return 0;
}