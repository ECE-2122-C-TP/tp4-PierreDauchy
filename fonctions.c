//
// Created by pmdau on 29/09/2021.
//

#include <stdio.h>

/* fonction qui compare deux entiers et renvoie le plus grand des deux.
 * Paramètres :
 * - IN : n1 et n2 les nombres à comparer
 * - OUT : plusGrand le plus grand entier des deux
 */

int getMax (int n1, int n2){
    int plusGrand = (n1 < n2) ? n2 : n1;
    return plusGrand;
}

/* fonction qui permet à l'utilisateur de saisir deux nombres d'abord à l'adresse n1 puis n2
 * Paramètres :
 * - IN : le nombre entré par l'utilisateur
 * - OUT : l'entier saisi n1
 */

int saisirEntier(){
    int n1 = 0;
    printf ("saisir un entier : \n>");
    scanf("%d", &n1);
    return n1;
}

/*variante de la fonction precedente avec un texte adapte au probleme 3
 * Paramètres :
 * - IN : le nombre entré par l'utilisateur
 * - OUT : l'entier saisi l
 */
int saisirCoteRectangle(){
    int l = 0;
    printf ("saisir la logueur du cote : \n>");
    scanf("%d", &l);
    return l;
}

int saisirNombreClasse(){
    int n = 0;
    printf ("saisir le nombre de classe(s) : \n>");
    scanf("%d", &n);
    return n;
}

int saisirNombreEleve(){
    int n = 0;
    printf ("saisir le nombre d'eleves : \n>");
    scanf("%d", &n);
    return n;
}

/*fonction qui, à partir de la longueur et largeur d'un rectangle, permet de determiner son perimetre
 * Paramètres :
 * - IN : les valeurs de la longueur et de la largeur
 * - OUT : la valeur du perimetre du rectangle avec ces caractéristiques
 */

int calculPerimetre (int l, int L){
    return 2 * l + 2 * L;
}

/*fonction qui, à partir de la longueur et largeur d'un rectangle, permet de determiner son aire
 * Paramètres :
 * - IN : les valeurs de la longueur et de la largeur
 * - OUT : la valeur de l'aire du rectangle avec ces caractéristiques
 */

int calculAire (int l, int L){
    return L * l;
}

/*fonction qui prend deux entiers et determine si le premier est multiple du second
 * Paramètres :
 * - IN : les valeurs des deux entiers n1 et n2
 * - OUT : 0 si non et 1 si oui
 */

int multiple(int n1, int n2){
    int out = (n1 % n2 == 0) ? 1 : 0;
    return out;
}

/*fonction prenant trois notes en paramètres et retournant la moyenne si les trois notes sont bien comprises entre 0 et 20, sinon -1.
 * Paramètres :
 * - IN : les valeurs des trois notes
 * - OUT : la moyenne (moy) si les notes sont comprises entre 0 et 20 sinon -1
 */

float moyenne3Notes(int note1, int note2, int note3){
    float moy =((note1 >= 0) && (note1 <= 20) && (note2 >= 0) && (note2 <= 20) && (note3 >= 0) && (note3 <= 20)) ? ((note1 + note2 + note3) / 3) : -1;
    return moy;

}

/*fonction qui renvoie le total des eleves
 * Paramètres :
 * - IN : la valeur du nombre de classe
 * - OUT : le nombre d'élèves au total
 */

int totalEleves(int nbClasses){
    int i = 0, n = 0;
    for (i = 0; i < nbClasses; i++)
    {
        n += saisirNombreEleve();
    }
    return n;
}

/*fonction qui defini si un entier est à la fois multiple de 7 et 2
 * Paramètres :
 * - IN : l'entier saisi
 * - OUT : 1 si oui et 0 si non
 */

int multiple7Et2(int n){
    int sortie = (n % 7 == 0 && n % 2 == 0) ? 1 : 0;
    return sortie;
}

/*fonction qui permet de trouver le nombre d'étages de pyramide basé sur le modèle du td réalisable à partir d'un nobre de brique
 * Paramètres :
 * - IN : le nombre de briques (nbb)
 * - OUT : nbe : le nombre d'étages possible de construire et -1 si le nombre entré n'est pas valide
 */

int nombreEtagePossible(int nbb){
    int i = 1, nbe = 0;
    if (nbb > 1)                      /*eviter le cas ou le nombre d'étages vaut -1*/
    {
        while (nbb >= i * i)          /* on utilise nbb comme etant le nombre de pierres restantes pour former un nouvel etage et il faut que ce soit superieur au nombre au carre suivant*/
        {
            nbb -= i * i;
            i += 1;
            nbe += 1;
        }
        nbe -= 1;
        printf("Le nombre d'etages complets qu'il sera possible de construire est : ");
    }
    else if (nbb == 1)
    {
        nbe = 0;
        printf("Le nombre d'etages complets qu'il sera possible de construire est : ");
    }
    else
    {
        printf("Le nombre entre n'est pas valide");
        nbe = -1;
    }
    return nbe;
}

/*fonction qui permet de renvoyer la moyenne de plusieurs entiers
 * Paramètres :
 * - IN : les entiers saisis par l'utilisateur
 * - OUT : la moyenne des entiers saisis
 */

float moyenne(){
    int n = 0, tot = 0, s = 0;    /*n est l'entier a saisir, tot est le nombre d'entiers saisis, s est la variable qui permet de stopper le programme*/
    float moy = 0;
    printf("Pour arreter la selection entrer un nombre negatif\n");
    while (s == 0)
    {
        n = saisirEntier();
        if (n < 0)
        {
            if (tot >= 1)
            {
                s = 1;
            }
            else
            {
                tot = 1;       /*eviter les division par 0*/
                s = 1;
            }
        }
        else
        {
            tot +=1;
            moy += n;
        }
    }
    moy = moy / tot;
    return moy;
}