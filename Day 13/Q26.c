#include <stdio.h>
int main () {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i=1; i<=a; i++){
        printf("%d ", i);
    }
    return 0;
}