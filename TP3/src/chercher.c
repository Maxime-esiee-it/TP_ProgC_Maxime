#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int entier;
    int present = 0;
    int i;

    srand(time(NULL));

    /* Remplissage du tableau */
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 - 500; /* valeurs entre -500 et 499 */
    }

    /* Affichage du tableau */
    printf("Tableau :\n");

    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &entier);

    /* Recherche */
    for (i = 0; i < TAILLE; i++) {
        if (tableau[i] == entier) {
            present = 1;
            break;
        }
    }

    /* Affichage du résultat */
    if (present) {
        printf("Resultat : entier present\n");
    } else {
        printf("Resultat : entier absent\n");
    }

    return 0;
}