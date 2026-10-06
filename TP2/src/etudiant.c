#include <stdio.h>

int main() {
    char noms[5][20] = {
        "Dupont",
        "Martin",
        "Bernard",
        "Petit",
        "Moreau"
    };

    char prenoms[5][20] = {
        "Jean",
        "Marie",
        "Paul",
        "Sophie",
        "Lucas"
    };

    char adresses[5][50] = {
        "Paris",
        "Lyon",
        "Marseille",
        "Lille",
        "Toulouse"
    };

    float noteC[5] = {
        15.5,
        12.0,
        17.5,
        14.0,
        16.0
    };

    float noteSE[5] = {
        14.0,
        13.5,
        18.0,
        15.0,
        17.0
    };

    int i;

    for (i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", noteC[i]);
        printf