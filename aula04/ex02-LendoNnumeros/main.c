#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, soma=0;

    do{
        printf("Digite um numero de 0  a 19: ");
        scanf("%d",&num);
        if((num>=0) || (num < 20))
        {
            soma = soma + num;
        }
    }while(num != 0);
    printf("A somatoria eh: %d",soma);
    return 0;
}
