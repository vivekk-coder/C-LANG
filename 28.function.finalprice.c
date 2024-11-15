#include<stdio.h>
// pasing arguments......

//calculate price 18% gst

//declaration prototype 
void calculateprice(float value);

int main(){//function call

    float value;
    printf("enter the value : ");
    scanf("%f",&value);
     calculateprice(value);
     printf("price is : %f\n",value);
    return 0;
}

//function declaration

void calculateprice(float value){
     value = value + (0.18 * value);
     printf("final price is : %f\n",value);
}
