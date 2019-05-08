#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[4][2],b[4][2],c[4][3],linha,coluna;

    for(coluna=0;coluna<2;coluna++)
    {
        for(linha=0;linha<4;linha++)
        {
            printf("\nDigite o valor na posicao a[%d][%d]: ",linha,coluna);
            scanf("%d",&a[linha][coluna]);
            printf("\nDigite o valor na posicao b[%d][%d]: ",linha,coluna);
            scanf("%d",&b[linha][coluna]);

            c[linha][coluna] = a[linha][coluna] + b[linha][coluna];
        }
    }
    printf("\n");
    for(coluna=0;coluna<2;coluna++)
    {
        for(linha=0;linha<4;linha++)
        {
            printf("a[%d][%d]: %d + b[%d][%d]: %d = c[%d][%d]: %d. \n",linha,coluna,a[linha][coluna],linha,coluna,b[linha][coluna],linha,coluna,c[linha][coluna]);

        }
        printf("\n");
    }

    return 0;
}
