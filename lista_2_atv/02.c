#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    printf("|%d| = %d\n", num, num > 0 ? num : num * -1);

    return 0;
}