#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[51];
    int i, tamanho;
    printf("digite um nome: ");
    gets(nome);
    tamanho = strlen(nome);
    for(i=0;i<tamanho;i++)
    {
        printf("%c\n",nome[i]);
    }
    return 0;
}
