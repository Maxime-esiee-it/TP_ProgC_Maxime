#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_COULEURS 100

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurCompteur {
    struct Couleur couleur;
    int compteur;
};

int main() {
    struct Couleur tableau[NB_COULEURS];
    struct CouleurCompteur uniques[NB_COULEURS];

    int nbUniques = 0;
    int i, j, trouve;

    srand(time(NULL));

    /* Génération de 100 couleurs */
    for (i = 0; i < NB_COULEURS; i++) {
        tableau[i].r = (rand() % 5) * 50;
        tableau[i].g = (rand() % 5) * 50;
        tableau[i].b = (rand() % 5) * 50;
        tableau[i].a = 255;
    }

    /* Comptage des couleurs distinctes */
    for (i = 0; i < NB_COULEURS; i++) {
        trouve = 0;

        for (j = 0; j < nbUniques; j++) {
            if (tableau[i].r == uniques[j].couleur.r &&
                tableau[i].g == uniques[j].couleur.g &&
                tableau[i].b == uniques[j].couleur.b &&
                tableau[i].a == uniques[j].couleur.a) {

                uniques[j].compteur++;
                trouve = 1;
                break;
            }
        }

        if (!trouve) {
            uniques[nbUniques].couleur = tableau[i];
            uniques[nbUniques].compteur = 1;
            nbUniques++;
        }
    }

    /* Affichage */
    printf("Couleurs distinctes :\n\n");

    for (i = 0; i < nbUniques; i++) {
        printf("0x%02X 0x%02X 0x%02X 0x%02X : %d\n",
               uniques[i].couleur.r,
               uniques[i].couleur.g,
               uniques[i].couleur.b,
               uniques[i].couleur.a,
               uniques[i].compteur);
    }

    return 0;
}