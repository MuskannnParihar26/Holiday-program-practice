#include <stdio.h>

int main() {
    int base, exp, result = 1;

    printf("Muskan\n");
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    for(int i = 1; i <= exp; i++)
        result *= base;

    printf("Result = %d\n", result);
    printf("Muskan\n");

    return 0;
}