#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strconcat(char* s1, char* s2) {

    int i, j;

    int len1 = strlen(s1), len2 = strlen(s2);

    char* strf = (char*)malloc((len1 + len2 + 1) * sizeof(char));

    for (i = 0; s1[i] != '\0'; i++) {
        strf[i] = s1[i];
    }

    for (j = 0; s2[j] != '\0'; j++) {
        strf[i] = s2[j];
        i++;
    }

    strf[i + 1] = '\0';

    return strf;

};

int main() {

    char s1[] = {'h', 'e', 'l', 'l', 'o', ' '};
    char s2[] = {'w', 'o', 'r', 'l', 'd'};

    char* s3 = strconcat(s1, s2);

    printf("String: %s\n", s3);


    return 0;
}
