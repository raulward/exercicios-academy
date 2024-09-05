#include <stdio.h>

int main() {

    int value1, value2;

    scanf("%d %d", &value1, &value2);

    if (value1 > value2) {
        printf("%d maior que %d\n", value1, value2);
    } else if (value1 == value2) {
        printf("Valores iguais\n");
    } else {
        printf("%d maior que %d\n", value2, value1);
    }

    return 0;

}