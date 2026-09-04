#include <stdio.h>
int main () {
    float a;
    printf("Enter the marks of the student : ", a);
    scanf("%f", &a);
    if (a >=90){
        printf("The student has scored an A grade");
    }
    else if (a >=80 && a <90){
        printf("The student has scored a B grade");
    }
    else if (a >=70 && a <80){
        printf("The student has scored a C grade");
    }
    else if (a >=60 && a <70){
        printf("The student has scored a D grade");
    }
    else {
        printf("The student has scored an F grade");
    }
    return 0;
}