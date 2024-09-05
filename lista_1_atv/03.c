#include <stdio.h>

int main() {

    float num1, num2, num3, result;

    scanf("%f %f %f", &num1, &num2, &num3);

    result = (num1 + num2 + num3) / 3;

    printf("%.2f\n", result);

    return 0;
}