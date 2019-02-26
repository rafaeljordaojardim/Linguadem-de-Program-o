#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float area, perimetro, raio;
        printf("Digite po valor do raio da circuferencia: ");
        scanf("%f",&raio);

            area = PI *(raio * raio);
            perimetro = (2 * PI) * raio;

        printf("o valor da area eh %6.2f \n",area);
        printf("o valor do perimetro eh %.2f \n",perimetro);

    return 0;


}
