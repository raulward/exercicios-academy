#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    printf("%s\n", num % 2 == 0 ? "Par" : "Impar");

    return 0;

}