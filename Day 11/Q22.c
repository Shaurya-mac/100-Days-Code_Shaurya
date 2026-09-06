#include <stdio.h>
int main () {
    float cp;
    printf("Enter the cost price of the item: ");
    scanf("%f", &cp);
    float sp;
    printf("Enter the selling price of the item: ");
    scanf("%f", &sp);
    if (sp > cp) {
        float profit = sp - cp;
        printf("Profit: %.2f\n", profit);
    } else if (cp > sp) {
        float loss = cp - sp;
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}    