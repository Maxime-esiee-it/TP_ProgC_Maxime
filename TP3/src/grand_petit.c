#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int i;
    int max, min;

    srand(time(NULL));

    /* Remplissage du tableau avec des valeurs aléatoires */
    for (i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    /* Initialisation du minimum et du maximum */
    max = tableau[0];
    min = tableau[0];

    /* Recherche du plus grand et du plus petit */
    for (i = 1; i < 100; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }

        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    /* Affichage des résultats */
    printf("Le numero le plus grand est : %d\n", max);
    printf("Le numero le plus petit est : %d\n", min);

    return 0;
}