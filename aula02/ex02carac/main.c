#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra,letra2;

    printf("digite um caractere: ");
    scanf("%c",&letra);
    fflush(stdin);
    printf("digite outro caractere: ");
    scanf("%c",&letra2);

    printf("as letras sao %c e %c \n", letra, letra2);

    return 0;
}
