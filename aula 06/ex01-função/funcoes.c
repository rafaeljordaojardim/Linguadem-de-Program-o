void sortear(int jogo[],int ts){
    int i;

    for(i=0;i<20;i++)
    {
        jogo[i] = (rand() % 15) + 1;
        //printf(" %2d ",jogo[i]);
    }

}
void palpitar(int palp[],int tp){
    int i;

    for(i=0;i<tp;i++)
    {
        do{
            printf("Digite o %d palpite de 1 a 15: ",i+1);
            scanf("%d",&palp[i]);
            if((palp[i] < 1)||(palp[i] > 15))
            {
                printf("Digite um palpite valido de 1 a 15. ");
                system("pause");
                system("cls");
            }
        }while((palp[i] < 1)||(palp[i] > 15));
        system("cls");
    }
}
void verificar(int jogo[],int palp[],int tj,int tp){
    int i,j,mostrar=0;

    for(i=0;i<tp;i++)
    {
        for(j=0;j<tj;j++)
        {
            if(jogo[j] == palp[i])
            {
                printf("\nAcertou o palpite %d na linha %d \n",palp[i],j);
                mostrar = 1;
            }
        }
    }
    if(mostrar == 0)
    {
        printf("\nVoce nao acertou nenhum!!\n");
    }
    printf("\n\npalpites\n");
    for(i=0;i<tj;i++)
    {
        printf(" %d ",jogo[i]);
    }
}


