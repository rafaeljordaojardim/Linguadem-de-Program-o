#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num, maior, menor, soma=0, media;

    for(i=1;i<=5;i++)
    {
        printf("Digite o %d valor: ",i);
        scanf("%d",&num);
        soma = soma + num;
        if(i==1)
        {
            maior = num;
            menor = num;
        }else{
                if( num > maior){
                    maior = num;
                }
                if(num < menor){
                    menor= num;
                }
        }
    }
    media = soma / 5;
    printf("maior numero: %d\n",maior);
    printf("menor numero: %d\n", menor);
    printf("media: %d\n", media);
    return 0;
}
