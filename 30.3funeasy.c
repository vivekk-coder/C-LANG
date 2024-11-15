#include<stdio.h>
#include<math.h>
//declaration prototype
float squareArea(float side);
float circleArea(float radius);
float ractangleArea(float a, float b);

//function call
int main (){
    float side;
    printf("enter the side : ");
    scanf("%f",&side);
      printf("area of a square is : %f\n",squareArea(side));

      float radius;
       printf("enter the radius : ");
    scanf("%f",&radius);
    printf("area of a circle is : %f\n", circleArea(radius) );
    

    float a, b;
     printf("enter the value of ractangle a: ");
    scanf("%f",&a);

      printf("enter the value of ractangle b : ");
    scanf("%f",&b);
    printf("area of a ractangle is : %f\n", ractangleArea( a, b) );
    

     
    return 0;
}
//function declaration
float squareArea(float side){
  
 return side*side;
}
float circleArea(float radius){
    return 3.14*radius*radius;
}

float ractangleArea(float a, float b){
    return a * b;
}