#include <stdio.h>

int main (){
    int a;
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("The number is even.\n");
        if (a>0){
            printf("The Number is positive\n");
        }
        else {
            printf("The Number is not Positive\n");
        }
        if(a==0){
            printf("The Number is zero\n");
        }
        else{
            printf("The Number is not Zero\n");
        }
        if (a<0){
            printf("The Number is negative\n");
        }
        else{
            printf("The Number is not Negative\n");
        }
    }
    
    else {
        printf("The number is odd.\n");
          if (a>0){
            printf("The Number is positive\n");
        }
        else {
            printf("The Number is not Positive\n");
        }
        if(a==0){
            printf("The Number is zero\n");
        }
        else{
            printf("The Number is not Zero\n");
        }
        if (a<0){
            printf("The Number is negative\n");
        }
        else{
            printf("The Number is not Negative\n");
        }
    }
    return 0;
}