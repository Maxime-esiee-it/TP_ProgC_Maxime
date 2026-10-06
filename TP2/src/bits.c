#include <stdio.h>

int main() {
    unsigned int d = 268439552; // exemple

    int bit4g = (d >> 28) & 1;
    int bit20g = (d >> 12) & 1;

    if (bit4g == 1 && bit20g == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}