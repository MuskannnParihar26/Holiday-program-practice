#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Muskan\n");
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);
    printf("Muskan\n");
    return 0;
}