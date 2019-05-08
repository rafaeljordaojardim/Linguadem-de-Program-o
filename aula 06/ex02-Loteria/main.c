#include <stdio.h>
#include <stdlib.h>
void sortear(int tabu[],int t);
void jogar(int matriz[5][6]);
void verificar(int tabu[],int tg,int matriz[5][6]);
void mostrar(int tabu[],int dim, int matriz);
int main()
{
    srand(time(NULL));
    int tabu[60] = {{0}},matriz[5][6];
    sortear(tabu,60);
    jogar(matriz);
    verificar(tabu,60,matriz);
    mostrar(tabu,60,matriz);
    return 0;
}
