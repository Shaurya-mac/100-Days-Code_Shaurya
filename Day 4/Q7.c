#include <stdio.h>

int main () {
    int x,y;
    printf("Input two numbers to be swapped :");
    scanf("%d %d", &x, &y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The Numbers are %d and %d.", x,y);
    return 0;
}