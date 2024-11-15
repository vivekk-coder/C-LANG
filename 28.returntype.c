#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b;
    printf("enter the first number : ");
    scanf("%d",&a);
     printf("enter the second number : ");
    scanf("%d",&b);

    int s = sum(a, b);
     printf("sum is : %d ", s);
    return 0;
}

int sum(int x, int y){
return x + y;
}

// next program

#include<stdio.h>
//declaration prototype 
void calculateprice(float value);

int main(){

    float value = 100.0;
     calculateprice(value);
    return 0;
}
void calculateprice(float value){
     value = value + (0.18 * value);
     printf("final price is : %f\n",value);
}
