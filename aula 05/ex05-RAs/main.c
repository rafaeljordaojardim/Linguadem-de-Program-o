#include <stdio.h>
#include <stdlib.h>
#define LIN 8
#define COLU 4
int main()
{
    float aluno[LIN][COLU];
    int i;

    for(i=0;i<LIN;i++)
    {
        printf("Digite o RA do aluno %d: ",i+1);
        scanf("%f",&aluno[i][0]);

        printf("Digite a primeira nota do aluno %d: ",i+1);
        scanf("%f",&aluno[i][1]);

        printf("digite a segunda nota do aluno %d: ",i+1);
        scanf("%f",&aluno[i][2]);

        aluno[i][3] = (aluno[i][1] + aluno[i][2]) / 2.00;

        system("cls");
    }

   for(i=0;i<LIN;i++)
   {
       printf("Aluno: %2d --> RA: %.0f | P1: %.2f | p2: %.2f | MD: %.2f\n",i+1,aluno[i][0],aluno[i][1],aluno[i][2],aluno[i][3]);

   }
    return 0;
}
