#include <stdio.h>
#include <stdlib.h>


float calcLiqui(float salB)
{
    float res;

    if(salB < 1000)
    {
        res = salB - (salB * 0.05);
        printf(" valor do imposto: %.2f\n",salB * 0.05);
    }else if (salB < 5000)
    {
        res = salB - (salB * 0.11);
        printf(" valor do imposto: %.2f\n",salB * 0.11);

    }else
    {
       res = salB - (salB * 0.35);
       printf(" valor do imposto: %.2f\n",salB * 0.35);
    }
    return res;
}
int main()
{
    float salarioBruto;

    while(salarioBruto < 1)
    {
       printf("Digite seu salario: ");
       scanf("%f",&salarioBruto);

       if(salarioBruto < 1)
       {
         printf("Digite um salario valido: ");
         scanf("%f",&salarioBruto);
       }
    }

    printf("o valor do deu salario liquido eh: %.2f\n", calcLiqui(salarioBruto));
    printf("o valor do deu salario bruto eh: %.2f\n", salarioBruto);
}
