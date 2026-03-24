#include <stdio.h>

int main() {
    int n;
    printf("Muskan\n");
    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--)
        printf("%d ", i);
    printf("\nMuskan\n");
    return 0;
}