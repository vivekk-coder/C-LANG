#include<stdio.h>
int main(){
    int n;
do{
    printf("enter the number : ");
    scanf("%d", &n);
    printf("%d\n", n);

    if(n % 7 == 0){
        break;// multiple of 7
    }

}while(1);

printf("thank you");

return 0;
}
