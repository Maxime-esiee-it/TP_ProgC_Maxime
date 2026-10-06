#include <stdio.h>

int main() {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[100];
    char concat[100];

    int longueur = 0;
    int i, j;

    /* Calcul de la longueur de chaine1 */
    while (chaine1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    /* Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    /* Copie de chaine1 dans concat */
    i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    /* Concaténation de chaine2 */
    j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}