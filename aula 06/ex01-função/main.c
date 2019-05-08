#include <stdio.h>
#include <stdlib.h>
void verificar(int jogo[],int palp[],int tj,int tp);
void palpitar(int palp[],int tp);
void sortear(int jogo[],int ts);
int main()
{
    srand(time(NULL));
    int jogo[20],palp[3];
    sortear(jogo,20);
    palpitar(palp,3);
    verificar(jogo,palp,20,3);
    return 0;
}
