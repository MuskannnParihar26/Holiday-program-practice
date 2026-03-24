#include <stdio.h>

int main() {
    int n, reverse = 0, digit;
    printf("Muskan\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    printf("Reversed Number = %d\n", reverse);
    printf("Muskan\n");
    return 0;
}