//
// Created by pmdau on 29/09/2021.
//
#include <stdio.h>
#include "fonctions.h"

void ex1(){
    printf("Le plus grand des deux entiers est : %d", getMax(saisirEntier(), saisirEntier()));
    return ;
}

void ex3(){
    int l = saisirCoteRectangle(), L = saisirCoteRectangle();
    printf("Le perimetre de ce rectangle vaut : %d\n", calculPerimetre(l, L));
    printf("L'aire de ce rectangle vaut : %d", calculAire(l, L));
    return ;
}

#define ENTIER_SUPERIEUR_OU_EGAL 10

void ex4(){
    int n = saisirEntier();
    if (multiple(n,3) == 1)
    {
        printf("L'entier saisi est un multiple de 3\n");
    }
    else
    {
        printf("L'entier saisi n'est pas un multiple de 3\n");
    }
    if (n >= ENTIER_SUPERIEUR_OU_EGAL)
    {
        printf("L'entier saisi est superieur ou egal a : %d\n", ENTIER_SUPERIEUR_OU_EGAL);
    }
    else
    {
        printf("L'entier saisi est inferieur a : %d\n", ENTIER_SUPERIEUR_OU_EGAL);
    }
    return ;
}

void ex5(){
    int note1 = saisirEntier(), note2 = saisirEntier(), note3 = saisirEntier();
    if (moyenne3Notes(note1, note2, note3) == -1)
    {
        printf("L'une des notes au moins n'est pas valide");
    }
    else
    {
        printf("La moyenne des trois notes vaut : %f", moyenne3Notes(note1, note2, note3));
    }
    return;
}

void ex7Bis(){
    printf("Le nombre total d'eleves dans l'ecole est : %d", totalEleves(saisirNombreClasse()));
    return ;
}

void ex8Bis(){
    int n = saisirEntier();
    while (multiple7Et2(n) == 0)
    {
        printf ("L'entier saisi n'est pas multiple de 7 et 2 a la fois ");
        n = saisirEntier();
    }
    printf("L'entier saisi est bien un multiple de 7 et 2");
    return;
}

void ex9Bis(){
    printf("Le nombre d'etages qu'il est possible de construire vaut : %d", nombreEtagePossible(saisirEntier()));
    return ;
}

void ex10Bis(){
    printf("La moyenne de ces nombres entiers vaut : %f\n", moyenne());
    return;
}