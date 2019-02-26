#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salBruto, imposto;
    char estado;
    printf("Digite o salario bruto: ");
    scanf("%f",&salBruto);
    fflush(stdin);
    printf("Digite seu estado S para solteiro e C para casado: ");
    scanf("%c",&estado);

    switch(estado)
    {
    case 'c':
        case 'C':
            imposto = salBruto * 0.90;
            printf("imposto: %.2f",imposto);
        break;
    case 's':
        case 'S':
            imposto = salBruto * 0.10;
            printf("imposto: %.2f",imposto);
        break;
    default:
         printf("opcao ivalida gatinho");
    }
    return 0;
}
