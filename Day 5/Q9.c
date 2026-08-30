#include <stdio.h>

int main() {
    int p, t;
    float r, si;
    printf("Enter Principle , rate of interest in per annum and time (No. of Years): ");
    scanf("%d %f %",&p,&r,&t);
    si = (p*t*r)/100;
    printf(" The Simple Interest is :%f", si);
    float ci;
    ci = p * (1 + r/100) * (1 + r/100) * (1 + r/100) - p;
    printf(" The Compound Interest is :%f", ci);
    return 0;
}