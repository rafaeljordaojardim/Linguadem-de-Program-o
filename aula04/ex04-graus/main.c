#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0,f=0;

    for(c=0;c<=100;c++)
    {
        f = (c  * 1.8000) + 32;
        printf("%4d em celsius sao %4d em Fahrenheit\n",c,f);
    }
    return 0;
}
