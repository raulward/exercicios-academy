#include <stdio.h>

int main() {

    int hours, minutes, seconds;

    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = (minutes * 60);

    printf("minutes: %d, seconds: %d\n", minutes, seconds);

    return 0;
}