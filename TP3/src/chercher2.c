#include <stdio.h>

int main() {
    char phrases[10][100] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[100];
    int trouve = 0;

    printf("Entrez la phrase a rechercher : ");
    fgets(recherche, 100, stdin);

    /* Suppression du '\n' ajouté par fgets */
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    /* Recherche de la phrase */
    for (i = 0; i < 10; i++) {
        int j = 0;
        int identique = 1;

        while (phrases[i][j] != '\0' || recherche[j] != '\0') {
            if (phrases[i][j] != recherche[j]) {
                identique = 0;
                break;
            }
            j++;
        }

        if (identique) {
            trouve = 1;
            break;
        }
    }

    if (trouve)