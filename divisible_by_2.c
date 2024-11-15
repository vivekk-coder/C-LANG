#include<stdio.h>
int main(){

    int x = 0;
    printf("enter the no : ");
    scanf("%d",&x);

   if(x % 2 == 0)

{
    printf("%d no is dividible by 2 :",x);
}

else
{
    printf("%d no is not divisible by 2 :",x);
}
    
    return 0; 
}  