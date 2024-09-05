#include <stdio.h>

int main() {

    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2 && n1 > n3) {
        printf("Maior numero: %d\n", n1);
    } else if (n2 > n1 && n2 > n3) {
        printf("Maior numero: %d\n", n2);
    } else if (n2 > n1 && n2 == n3) {
        printf("Maior numero: %d\n", n2);
    } else if (n1 > n3 && n1 == n2) {
        printf("Maior numero: %d\n", n1);
    } else {
        printf("Maior numero: %d\n", n3);
    }

    return 0;

}