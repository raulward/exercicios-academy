#include <stdio.h>

int main() {

    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3) {
        printf("Menor numero: %d\n", n1);
    } else if (n2 < n1 && n2 < n3) {
        printf("Menor numero: %d\n", n2);
    } else if (n2 < n1 && n2 == n3) {
        printf("Menor numero: %d\n", n2);
    } else if (n1 < n3 && n1 == n2) {
        printf("Menor numero: %d\n", n1);
    } else {
        printf("Menor numero: %d\n", n3);
    }

    return 0;

}