#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Muskan\n");
    printf("Enter number: ");
    scanf("%d", &n);

    while(n != 0) {
        n /= 10;
        count++;
    }

    printf("Digits = %d\n", count);
    printf("Muskan\n");

    return 0;
}