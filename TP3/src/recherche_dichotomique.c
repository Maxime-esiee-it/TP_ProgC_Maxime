#include <stdio.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int nombre;
    int debut = 0;
    int fin = TAILLE - 1;
    int milieu;
    int trouve = 0;

    /* Création d'un tableau trié */
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = i + 1;
    }

    /* Affichage du tableau */
    printf("Tableau trie :\n");

    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombre);

    /* Recherche dichotomique */
    while (debut <= fin) {
        milieu = (debut + fin) / 2;

        if (tableau[milieu] == nombre) {
            trouve = 1;
            break;
        }
        else if (nombre < tableau[milieu]) {
            fin = milieu - 1;
        }
        else {
            debut = milieu + 1;
        }
    }

    if (trouve) {
        printf("Resultat : entier present\n");
    } else {
        printf("Resultat : entier absent\n");
    }

    return 0;
}