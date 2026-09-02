#include <stdio.h>

int main() {
    int a;
    printf("Enter the First number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the Second number: ");
    scanf("%d", &b);
    int c;
    printf("Enter the Third number: ");
    scanf("%d", &c);
    if (a > b && a > c) {
        printf("%d is the largest number.\n", a);
    } else if (b > a && b > c) {
        printf("%d is the largest number.\n", b);
    } else {
        printf("%d is the largest number.\n", c);
    }
    return 0;
}