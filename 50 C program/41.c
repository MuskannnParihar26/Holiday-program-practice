#include <stdio.h>

int main() {
    int a[5],i,sum=0;
    printf("Muskan\n");

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        sum+=a[i];

    printf("Sum = %d\n",sum);

    printf("Muskan\n");
    return 0;
}