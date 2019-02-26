#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, valorResp;

    printf("Digite um valor para calcular: ");
    scanf("%f",&valor);
    valorResp = valor > 1000 ? (valor * 0.05) + valor : (valor * 0.07) + valor;
    printf("valor aumentado: %.2f", valorResp);



    return 0;
}
