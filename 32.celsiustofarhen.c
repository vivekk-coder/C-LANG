#include<stdio.h>
float convertcelsious(float celsious);

int main (){
    float farhen = convertcelsious(37);
    printf("farhenhit : %f\n", farhen);
    return 0;
}
float convertcelsious(float celsious){
    float farhen =  celsious * (9.0 / 5.0) + 32;
    return farhen;
}