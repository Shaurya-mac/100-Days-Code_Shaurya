#include <stdio.h>

int main () {
    int n;
    printf("Enter n Natural numbers to be summed: ");
    scanf("%d", &n);
    int sum = 0;
    printf("The sum of first %d Natural numbers is: ",n);
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return 0;
}