#include<stdio.h>
float calcpercentage(float math, float physics, float chemistry, float hindi, float);
int main(){

    // float  ma = 90;
    // float phy = 80;
    // float che = 70;
    // float hin = 94;
    // float eng = 80;
    float percentage = calcpercentage(90, 80, 70, 94, 80);
    printf("percentage is : %f\n", percentage);

    return 0;
}
float calcpercentage(float math, float physics, float chemistry, float hindi, float english){
    float percentage = ((math + physics + chemistry + hindi + english) /5 );
    return percentage;
}