#include <stdio.h>

int main() {
    int n, original, sum = 0, digit;

    printf("Muskan\n");
    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if(sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    printf("Muskan\n");
    return 0;
}