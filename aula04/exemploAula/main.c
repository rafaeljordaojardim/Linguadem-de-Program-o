#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i;
    for( i=0;i<10;i++)
    {
        printf("Hello world!\n");
    }
    return 0;*/

    int opc;

    do{
            system("cls");
        printf("Hello world!\n");
        printf("Hello world!\n");
        printf("Hello world!\n");
        printf("Hello world!\n");
        scanf("%d",&opc);
    }while((opc<1) || (opc>3));
}
