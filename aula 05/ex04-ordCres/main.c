#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int main()
{
    int a[DIM],i=0,j=0,troca;
    char s = 'n';

    for(i=0;i<DIM;i++)
    {
        printf("Digite um numero: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<DIM;i++)
    {
        for(j=i+1;j<DIM;j++)
        {
            if(a[j] < a[i])
            {
                troca = a[i];
                a[i] = a[j];
                a[j] = troca;
            }
        }
    }
    for(i=0;i<DIM;i++)
    {
        printf(" %d " ,a[i]);
    }
    return 0;
}
