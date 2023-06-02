#include <stdio.h>
#include <stdlib.h>

void Menu(char Itens)
{
}
int main()
{
    char mac = 0, chaveporta = 0, codcadeado = 0, fio = 0, clipe = 0;
    int lugar, sabe = 0, loop = 0;
    do
    {

        printf("Voce acorda em uma sala e nao se lembra o que aconteceu na noite passada.\n");
        printf("\n");
        printf("Aparentemente voce foi sequestrado! Ao olhar em volta voce ve:\n");
        printf("\n");
        printf("1 - Uma Porta\n");
        printf("2 - Uma mesa\n");
        printf("3 - Uma lixeira\n");
        printf("4 - Um ralo de esgoto no chao\n");
        printf("\n");
        printf("Para onde voce deseja ir?\n");
        printf("Digite o numero do local: ");

        scanf("%i", &lugar);

        if(lugar == 1)
        {

            system("cls");
            printf("\nA porta esta trancada, esta sem a macaneta e tem um cadeado que necessita de uma senha.\n");

            if(mac == 0)
            {
                printf("\nVoce ainda nao possui o item macaneta.\n");
            }
            else
            {
                printf("\nVoce ja possui o item macaneta.\n");
            }

            if(codcadeado == 0)
            {
                printf("\nVoce ainda nao possui o item codigo do cadeado.\n");
            }
            else
            {
                printf("\nVoce ja possui o item codigo do cadeado.\n");
            }

            if(chaveporta == 0)
            {
                printf("\nVoce ainda nao possui a chave da porta.\n\n");
            }
            else
            {
                printf("\nVoce ja possui a chave da porta.\n\n");
            }

            if(mac == 1 && codcadeado == 1 && chaveporta == 1)
            {

                system("cls");
                printf("****** PARABENS! VOCE CONSEGUIU FUGIR! *****\n\n");
                exit(0);
            }
            sabe = 1;
            system("PAUSE");
            system("cls");
        }
        else if(lugar == 2)
        {
            int loopgaveta = 0;
            int gaveta = 0;
            while(loopgaveta != 1)
            {
                system("cls");

                printf("No canto da sala tem uma mesa. A mesa possui tres gavetas.");
                printf("\nQual delas voce deseja abrir?");
                printf("\n1 - Gaveta de cima, 2 - Gaveta do meio, 3 - Gaveta de baixo, 4 - Voltar");
                printf("\nGaveta: ");
                scanf("%i", &gaveta);

                switch(gaveta)
                {
                case 1:
                    printf("\n\nVoce abre a gaveta. Esta vazia!\n\n");
                    break;
                case 2:
                    if(mac == 0)
                    {

                        printf("\nNa gaveta, voce acha a macaneta da porta!");
                        printf("\n\n\n\n");
                        printf("***** VOCE OBTEVE O ITEM MACANETA!!! *****\n\n");
                        mac = 1;
                    }
                    else
                    {

                        printf("\n\nA gaveta esta vazia!\n\n");
                    }
                    break;
                case 3:
                    if(clipe == 0)
                    {

                        printf("\n\nAo abrir a gaveta, voce encontra um clipe de papel e uma linha de costura!\n\n");
                        printf("\n\n\n\n");
                        printf("***** VOCE OBTEVE O ITEM CLIPE DE PAPEL!!! *****\n\n");
                        printf("***** VOCE OBTEVE O ITEM LINHA DE COSTURA!!! *****\n\n");
                        clipe = 1;
                    }
                    else
                    {

                        printf("\n\nNao ha mais nada util nesta gaveta!\n\n");
                    }
                    break;

                case 4:
                    loopgaveta = 1;
                    break;
                default:
                    break;
                }
                system("PAUSE");
                system("cls");
            }
        }
        else if (lugar == 3)
        {
            int menu = 0;

            system("cls");


            printf("Voce encontra uma lixeira cheia de lixo.\n");
            printf("O que deseja fazer?\n1 - Verificar\n2 - Voltar\n");
            scanf("%i", &menu);
            switch(menu)
            {
            case 1:
                if(codcadeado == 1)
                {
                    printf("\nVoce nao acha mais nada interessante na lixeira.\n\n");
                }
                else
                {
                    printf("\n\nAo mexer na lixeira, voce encontra um papel com um codigo:");
                    {
                        srand(time(NULL));

                        int x = (rand() % 10000) + 1000;

                        if(x > 9999)
                        {

                            x=x - 1000;

                        }

                        printf("%d\n", x);

                    }
                    printf("\n\n");
                    printf("***** VOCE OBTEVE O ITEM CODIGO DO CADEADO!!! *****\n");
                    codcadeado = 1;
                    fio = 1;
                }

                break;
            }

            system("PAUSE");
            system("cls");
        }
        else if (lugar == 4)
        {

            int menu = 0;
            int combinar = 0;

            system("cls");

            printf("Voce ve um ralo no chao. O que voce faz?\n");
            printf("1 - Verificar\n2 - Voltar\n");
            scanf("%i", &menu);
            switch(menu)
            {
            case 1:
                printf("\n\nVoce ve no fundo do ralo uma pequena chave, mas sua mao e grande demais para pega-la.\n\n");
                if(fio = 1 && clipe == 1)
                {
                    printf("\nVoce quer criar um anzol com o fio dental e o clipe?");
                    printf("\n1 - Sim\n2 - Nao\n");
                    scanf("%i", &combinar);
                    if(combinar == 1)
                    {
                        system("cls");

                        printf("\n\nVoce faz um tipo de anzol e consegue pegar a chave de dentro do ralo\n\n");
                        printf("***** VOCE OBTEVE O ITEM CHAVE DA PORTA*****\n\n");
                        chaveporta = 1;
                        fio = 0;
                        clipe = 0;
                    }
                }
                break;
            }
            system("PAUSE");
            system("cls");
        }

    }
    while(loop != 1);
    system("PAUSE");
    return 0;
}
