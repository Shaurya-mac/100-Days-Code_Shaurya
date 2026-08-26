#include <stdio.h>
int main (){
    int l ;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&l);
    int b ;
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&b);
    printf("Area of rectangle: %d\n",l*b);
    printf("Perimeter of rectangle: %d\n",2*(l+b));
    return 0;
}