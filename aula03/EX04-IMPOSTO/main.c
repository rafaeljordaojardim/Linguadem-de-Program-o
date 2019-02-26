#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, imposto;
    char sexo;
    printf("Digite seu sexo M para masculino e F para feminimo: ");
    scanf("%c",&sexo);

 switch(sexo)
    {
    case 'M':
        case 'm':
              printf("Digite seu salario: ");
              scanf("%f",&salario);
              imposto = salario * 0.15;
              printf("imposto: %.2f ", imposto);
        break;
    case 'F':
        case 'f':
              printf("Digite seu salario: ");
              scanf("%f",&salario);
              imposto = salario * 0.10;
              printf("imposto: %.2f ", imposto);
        break;
    default:
        printf("Opcao invalida!!");
    }

    return 0;
}
