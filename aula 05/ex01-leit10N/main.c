#include <stdio.h>
#include <stdlib.h>
#define DIM 10
int main()
{
    int a[DIM]={{0}},b[DIM]={{0}},i;

    for(i=0;i<DIM;i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&a[i]);

        if(a[i]%2 == 0)
        {
            b[i] = a[i] * 5;
        }else{
            b[i] = a[i] + 5;
        }
    }
      for(i=DIM-1;i>=0;i--){
        printf(" %2d   %2d \n",a[i],b[i]);
    }

    return 0;

}
