#include <stdio.h>

int main() {
    int a, b, c;
    printf("Muskan\n");
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && a <= c)
        printf("Smallest= %d\n", a);
    else if(b <= a && b <= c)
        printf("Smallest=  %d\n", b);
    else
        printf("Smallest=  %d\n", c);

    printf("Muskan\n");
    return 0;
}