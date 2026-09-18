#include <stdio.h>

int main(void) {
    int compteur = 5;

    if (compteur >= 10 ||  compteur <= 0) {
        printf("Le compteur doit etre strictement inférieur a 10 et supérieur a 0.\n");
        return 1;
    }

    /* For */
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            /* Première ou dernière ligne : uniquement des ''*/
            if (i == 1 || i == compteur) {
                printf("* ");
            } 
            /* Lignes intermédiaires : '' au début et à la fin, '#' au milieu */
            else {
                if (j == 1 || j == i) {
                    printf("* ");
                } else {
                    printf("# ");
                }
            }
        }
        printf("\n");
    }

    /* While */
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == 1 || i == compteur) {
                printf("* ");
            } else if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}