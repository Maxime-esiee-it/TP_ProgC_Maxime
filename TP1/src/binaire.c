#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nbValeurs = 5;

    for (int n = 0; n < nbValeurs; n++) {
        int nombre = nombres[n];

        printf("%d = ", nombre);

        for (int i = 31; i >= 0; i--) {
            printf("%d", (nombre >> i) & 1);
        }

        printf("\n");
    }

    return 0;
}