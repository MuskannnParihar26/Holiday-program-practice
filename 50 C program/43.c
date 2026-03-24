#include <stdio.h>

int main() {
    int a[5],i;
    printf("Muskan\n");

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Reverse order:\n");

    for(i=4;i>=0;i--)
        printf("%d ",a[i]);

    printf("\nMuskan\n");
    return 0;
}