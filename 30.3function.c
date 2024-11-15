#include<stdio.h>
#include<math.h>
//declaration prototype
void calcsquire(float n);
void calccircle(float n);
void calcractangle(float a, float b);
 
 //function call
 int main (){
    float n;
    printf("enter the number : ");
    scanf("%f", &n);
    calcsquire(n);
    
    calccircle(n);
     
   float a;
   float b;
   printf("enter the valuer of a : ");
   scanf("%f",&a);
   printf("enter the valuer of b : ");
   scanf("%f",&b);

    calcractangle(a, b);
    return 0;
 }
 
//function declaration -- area of a square
 void calcsquire(float n){
     
    // float power = pow(n,2);
    float area = n*n;
    printf("area of a squire is : %f\n", area);
 }

// area of a circle
void calccircle(float n){
    float circle = 3.14*(n*n);
     printf("area of a circle is : %f\n", circle);
}

void calcractangle(float a, float b){
   
   float ractangle = a*b;

   printf("area of a ractangle is : %f\n", ractangle);

}