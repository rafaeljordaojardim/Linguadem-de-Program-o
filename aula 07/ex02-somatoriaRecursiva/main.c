#include <stdio.h>
#include <stdlib.h>
//função recursiva de somar
int somar(int n)
{
    if(n == 0) return 0;
    if(n % 3 == 0)
    {
        return n + somar(n-1);
    }else{
        somar(n - 1);
    }
}
int main()
{

    printf(" %d ",somar(100));
    return 0;
}
