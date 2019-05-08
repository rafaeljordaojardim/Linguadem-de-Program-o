#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char k[10];
    printf("digite seu nome: ");
    scanf("%s",&k);
    printf("%s",k);*/

    int m[5][5] = {{0}},x,y;

    for(x=0;x<5;x++){
        m[x][x]=1;
    }
    for(x=0;x<5;x++)
    {
        for(y=0;y<5;y++)
        {
            printf("%d",m[x][y]);
        }
        printf("\n");
    }
    return 0;
}
