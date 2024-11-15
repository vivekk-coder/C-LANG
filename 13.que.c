#include<stdio.h>

int main(){
    // for(int i=0; i<=10; i++){
    //     printf("%d\n", i);
    // }
    // ------------------------------------------
    //increment oprator
    // ++i  i++

    //i++ (post increment operator)

    // int i =1;
    // printf("%d\n", i++);
    // printf("%d\n", i++);
    // printf("%d\n", i);

    // output 
   /*
   1
   2
   3
   */

    
    //++i (pre increment operator)
    
    //  printf("%d\n", ++i);
    // printf("%d\n", ++i);
    // printf("%d\n", i);

    /*

    2
    3
    3
    */
    // printf("%d\n", i--);
    // printf("%d\n", i--);
    // printf("%d\n", i);
    // output
    /*

    1
    0
    -1
    */
        // printf("%d\n", --i);
        //    printf("%d\n", --i);
        //       printf("%d\n", --i);
        //          printf("%d\n", i);

              //output
              /*

              0
              -1
              -2
              -2
              
              */
             for(float i=1; i<=5; i++){
                printf("%f\n", i);
             }

             for(char ch='a'; ch<='z'; ch++){
                printf("%c\n", ch);
             }

    return 0;
}