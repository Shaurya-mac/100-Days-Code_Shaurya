#include <stdio.h>

int main () {
    int x;
    printf("The First Number is : ");
    scanf("%d", &x);
    int y;
    printf("The Second Number is : ");
    scanf("%d", &y);
    int z;
    z = y;
    y = x;
    x = z;
    printf("The Swapped Number are %d and %d",x, y);
    return 0;
}