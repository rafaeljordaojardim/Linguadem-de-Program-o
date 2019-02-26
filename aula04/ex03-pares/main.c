#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num=0,vezes=0;

    for(i=1;i<=10;i++)
    {
        printf("Digite o %d numero: ",i);
        scanf("%d",&num);
            if((num%2) == 0)
            {
                vezes+= 1;
            }
    }
    printf("%d vezes",vezes);
    return 0;
}
