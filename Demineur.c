#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "structure.h"
/*//Fonctions disponibles
TTMines* init_TTMines (TTMines* T ,char* difficulte);
void free_TTMines(TTMines* T);
void aff_TTMines (TTMines* T);
int somme_autour(int t[][],int lin,int col);
TTMines * deplace_curseur (TTMines * T,char dir);
//Fin*/

int main()
{
    srand(time(NULL));
    char dir;
    TTMines *T;
    T = init_TTMines("moyen");
    system ("/bin/stty -icanon");
    printf("bonjour\npourquoi ça ne marche pas ???\n je sais pas\n");
    while (dir != 'g')
    {
        system("clear");
        aff_TTMines(T);
        printf("Lin=%d, col=%d\n", T->lin+1, T->col+1);
        //scanf("%c",&dir);
        //fflush(stdin);
        dir = getc(stdin);
        T = instruction(T, dir);
    }
    system ("/bin/stty cooked");
    free_TTMines(T);
    //aff_TTMines(T);
    exit(0);
}