#include <stdio.h>
#include <stdlib.h>
#define DIM 8
int main()
{
    int a[DIM],b[DIM],i;

    for(i=0;i<DIM;i++)
    {
        printf("Digite um valor: ");
        scanf("%d",&a[i]);
        b[i] = a[i] * 3;
    }
    printf("\nVetor A | Vetor B\n\n");
    for(i=0;i<DIM;i++)
    {
        printf("  %d     |     %d\n",a[i],b[i]);
    }
    return 0;
}
