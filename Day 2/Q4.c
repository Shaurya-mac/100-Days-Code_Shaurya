#include <stdio.h>
int main (){
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    printf("Area of circle: %.2f\n",3.14*r*r);
    printf("Circumference of circle: %.2f\n",2*3.14*r);
    return 0;
}