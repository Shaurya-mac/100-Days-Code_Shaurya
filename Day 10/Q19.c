#include <stdio.h>

int main() {
    int a;
    printf("Enter the First side of the Triangle");
    scanf("%d", &a);
    int b;
    printf("Enter the second side of the triangle");
    scanf("%d", &b);
    int c;
    printf("Enter The Third Side of the Triangle");
    scanf("%d", &c);
    if (a==b && b==c && a==c) {
        printf("This is an Equilateral Triangle");
    }
    else if ((a==b && b==c && a!=c) || (a==c && c==b && a!=b) || (b==c && c==a && b!=a)) {
        printf("This is an Isosceles Triangle");
    }
    else {
        printf("This is a Scalene Triangle");
    }

    return 0;
}
