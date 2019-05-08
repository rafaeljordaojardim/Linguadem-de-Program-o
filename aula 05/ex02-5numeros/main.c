#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int main()
{
    int a[DIM]={0},somaTotal=0,somaPar=0,somaImpar=0,i;
    float porcent,contPar=0,contImpar=0;

    for(i=0;i<DIM;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&a[i]);

        if(a[i]%2 == 0)
        {
            somaPar = somaPar + a[i];
            contPar += 1;
        }else{
            somaImpar = somaImpar + a[i];
            contImpar +=1;
        }
      somaTotal = somaTotal + a[i];
    }
    porcent = (contImpar / contPar / 5) * 100;

    printf("A soma dos pares eh: %d \nA soma dos impares eh: %d \n",somaPar,somaImpar);
    printf("A soma total eh: %d \n A porcentagem eh: %.2f",somaTotal,porcent);
    return 0;
}
