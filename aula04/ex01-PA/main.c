#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r=0,i,resposta;
    printf("Digite um razao qualquer: ");
    scanf("%d",&r);

    for(i=1;i<=10;i++){
        resposta = i * r;
        printf("%d\n",resposta);
    }

    return 0;
}
