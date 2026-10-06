#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tabInt[10];
    float tabFloat[10];

    int *pInt;
    float *pFloat;
    int i;

    srand(time(NULL));

    /* Remplissage des tableaux */
    pInt = tabInt;
    pFloat = tabFloat;

    for (i = 0; i < 10; i++) {
        *(pInt + i) = rand() % 100;
        *(pFloat + i) = (float)(rand() % 1000) / 100.0f;
    }

    /* Affichage avant modification */
    printf("Tableau d'entiers avant modification :\n");
    pInt = tabInt;
    for (i = 0; i < 10; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de float avant modification :\n");
    pFloat = tabFloat;
    for (i = 0; i < 10; i++) {
        printf("%.2f ", *(pFloat + i));
    }

    /* Multiplication par 3 des indices divisibles par 2 */
    pInt = tabInt;
    pFloat = tabFloat;

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3;
        }
    }

    /* Affichage après modification */
    printf("\n\nTableau d'entiers après modification :\n");
    pInt = tabInt;
    for (i = 0; i < 10; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de float après modification :\n");
    pFloat = tabFloat;
    for (i = 0; i < 10; i++) {
        printf("%.2f ", *(pFloat + i));
    }

    printf("\n");

    return 0;
}