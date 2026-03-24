#include <stdio.h>

int main() {
    int num;

    printf("Muskan\n");
    printf("Enter number: ");
    scanf("%d", &num);

    if(num > 0)
        printf("Positive\n");
    else if(num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    printf("Muskan\n");
    return 0;
}