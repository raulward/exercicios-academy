#include <stdio.h>

int main() {

    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("%d mod %d e %d\n", num1, num2, num1 % num2);
    printf("%d \\ %d e %d\n", num1, num2, num1 / num2);


    return 0;
}