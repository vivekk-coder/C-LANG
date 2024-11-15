#include<stdio.h>
// average of number

int main (){
    float x1, x2, x3;
    printf("enter three  number : ");
    scanf("%f %f %f",&x1, &x2, &x3);

    float average = (x1+x2+x3)/3;

    printf("average of three number %f\n",average);

    return 0;

}
