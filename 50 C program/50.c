#include <stdio.h>

int main() {
    int a,b,temp;
    printf("Muskan\n");

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("After swap: %d %d\n",a,b);

    printf("Muskan\n");
    return 0;
}