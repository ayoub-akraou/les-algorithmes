/******************************************************************************
 
Challenge 3 : Tri par Sélection
Écrivez un programme C qui implémente l'algorithme de tri par sélection pour trier un tableau d'entiers. 
Affichez le tableau avant et après le tri.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void echanger(int *a, int *b);

void tri_selection(int tableau[], int taille) {
    for(int i = 0; i < taille - 1; i++) {
        int min_indice = i;
        int tmp;
        for(int j = i + 1; j < taille; j++) {
            if(tableau[j] < tableau[min_indice]) {
                min_indice = j;
            }
        }
        echanger(&tableau[min_indice], &tableau[i]);
    }
}

void echanger(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void afficher(int t[], int taille) {
     printf("avant le tri: \n{");
    for(int i = 0; i < taille; i++) {
        printf("%d", t[i]);
        if(i < taille - 1) printf(", ");
    }
    printf("}\n");
    
    tri_selection(t, taille);
    
    printf("apres le tri:\n{");
    for(int i = 0; i < taille; i++) {
        printf("%d", t[i]);
        if(i < taille - 1) printf(", ");
    }
    printf("}");
}

int main()
{
    int taille = 6;
    int t[6] = {10, 3, 7, 0, 8, 2};
    
   afficher(t, taille);
}

