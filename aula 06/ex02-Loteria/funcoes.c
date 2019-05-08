//funcao sorteia numeros 1 nas posicoes, e depois soma com a posicao
void sortear(int tabu[],int t){
    int i,j,n;
    for(i=0;i<6;i++)
    {
        n = rand() % 60;
        for(j=0;j<60;j++)
        {
            if(j == n)
            {
                tabu[j] = 1;
            }
        }
    }
      for(i=0;i<60;i++)
    {
        if(tabu[i] == 1)
        {
            tabu[i]+=i;
        }
    }
}
//funcao para preencher a matriz dos palpites dos usuario
void jogar(int matriz[5][6]){
    int i, j;
    for(i=0;i<5;i++)
    {
        printf("Digite 6 numeros para o %d jogo\n\n",i+1);
        for(j=0;j<6;j++)
        {
            do{
                printf("Digite o %d numero: ",j+1);
                scanf("%d",&matriz[i][j]);
                if((matriz[i][j] < 1)||(matriz[i][j]>60))
                {
                    printf("\nNumero invalido, digite um nuemro de 1 a 60\n");
                }
            }while((matriz[i][j] < 1)||(matriz[i][j]>60));

        }
        system("cls");
    }
}
void verificar(int tabu[],int tg,int matriz[5][6]){
    int i,j,k,cont=0,alguem = 0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            for(k=0;k<60;k++)
            {
                if(tabu[k] == matriz[i][j])
                {
                    cont+=1;
                }
            }
        }
        if(cont >= 2)
        {
            printf("Acertou %d numeros no jogo %d\n",cont,i+1);
            alguem = 1;
        }
        cont=0;
    }
   if(alguem == 0)
   {
        printf("\nNinguem acertou 2 ou mais numeros!!\n\n\n");
   }
}
void mostrar(int tabu[],int dim,int matriz[5][6]){
    int i,j;
    printf("Numeros sorteados\n");
    for(i=0;i<dim;i++)
    {
        if(tabu[i]!= 0)
        {
            printf(" %d ",tabu[i]);
        }
    }
    printf("\nNumeros jogados\n");
    for(i=0;i<5;i++)
    {
        printf("%d jogo: ",i+1);
        for(j=0;j<6;j++)
        {
            printf(" %3d ",matriz[i][j]);
        }
        printf("\n");
    }
}

