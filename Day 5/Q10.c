#include <stdio.h>

int main() {
    int t;
    printf("Input time in seconds: ");
    scanf("%d", &t);
    int hours = t / 3600;
    int minutes = (t % 3600) / 60;
    int seconds = t % 60;
    printf("Time is: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
 return 0;
}