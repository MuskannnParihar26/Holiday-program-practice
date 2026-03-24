#include <stdio.h>

int main() {
    int n;

    printf("Muskan\n");
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed Array: ");
    for(int i = n-1; i >= 0; i--)
        printf("%d ", arr[i]);

    printf("\nMuskan\n");

    return 0;
}