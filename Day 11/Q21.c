#include <stdio.h>
int main() {
    int month_number;
    printf("Enter month number (1-12): ");
    scanf("%d", &month_number);
    switch(month_number) {
        case 1:
            printf("Month Name: January\nNumber of Days: 31\n");
            break;
        case 2:
            printf("Month Name: February\nNumber of Days: 28 or 29 (Leap Year)\n");
            break;
        case 3:
            printf("Month Name: March\nNumber of Days: 31\n");
            break;
        case 4:
            printf("Month Name: April\nNumber of Days: 30\n");
            break;
        case 5:
            printf("Month Name: May\nNumber of Days: 31\n");
            break;
        case 6:
            printf("Month Name: June\nNumber of Days: 30\n");
            break;
        case 7:
            printf("Month Name: July\nNumber of Days: 31\n");
            break;
        case 8:
            printf("Month Name: August\nNumber of Days: 31\n");
            break;
        case 9:
            printf("Month Name: September\nNumber of Days: 30\n");
            break;
        case 10:
            printf("Month Name: October\nNumber of Days: 31\n");
            break;
        case 11:
            printf("Month Name: November\nNumber of Days: 30\n");
            break;
        case 12:
            printf("Month Name: December\nNumber of Days: 31\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}
