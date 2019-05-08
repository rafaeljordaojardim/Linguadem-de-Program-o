#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [51],sexo;
        //sempre colocar fflush(stdin) kkkk
    printf("Digite um nome: ");
    fflush(stdin);
    gets(nome);
    printf("Digite o sexo: ");
    fflush(stdin);
    sexo = getchar();
    printf("Nome digitado: %s %c %c", nome, sexo, sexo2);
    return 0;
}
