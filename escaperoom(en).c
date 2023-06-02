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

        printf("You wake up in a room and can't remember what happened last night.\n");
        printf("\n");
        printf("Apparently you've been kidnapped! By looking around you see:\n");
        printf("\n");
        printf("1 - A door\n");
        printf("2 - A desk\n");
        printf("3 - A trashcan\n");
        printf("4 - A drain on the floor\n");
        printf("\n");
        printf("Where do you want to go?\n");
        printf("Type the number: ");

        scanf("%i", &lugar);

        if(lugar == 1)
        {

            system("cls");
            printf("\nThe door is locked, it has no handle and it has a padlock that requires a password.\n");

            if(mac == 0)
            {
                printf("\nYou still don't have a handle.\n");
            }
            else
            {
                printf("\nYou already own a handle.\n");
            }

            if(codcadeado == 0)
            {
                printf("\nYou still don't have the padlock code.\n");
            }
            else
            {
                printf("\nYou already have the padlock code.\n");
            }

            if(chaveporta == 0)
            {
                printf("\nYou still don't have the door key.\n\n");
            }
            else
            {
                printf("\nYou already have the door key.\n\n");
            }

            if(mac == 1 && codcadeado == 1 && chaveporta == 1)
            {

                system("cls");
                printf("****** YOU'VE MANAGED TO ESCAPE! *****\n\n");
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

                printf("There is a table on the corner of the room. It has three drawers.");
                printf("\nWhich one do you open?");
                printf("\n1 - Top, 2 - Middle, 3 - Bottom, 4 - Go Back");
                printf("\nDrawer: ");
                scanf("%i", &gaveta);

                switch(gaveta)
                {
                case 1:
                    printf("\n\nYou open the drawer. It's empty!\n\n");
                    break;
                case 2:
                    if(mac == 0)
                    {

                        printf("\nYou found a door handle!");
                        printf("\n\n\n\n");
                        printf("***** YOU ACQUIRED THE DOOR HANDLE!!! *****\n\n");
                        mac = 1;
                    }
                    else
                    {

                        printf("\n\nThe drawer is empty!\n\n");
                    }
                    break;
                case 3:
                    if(clipe == 0)
                    {

                        printf("\n\nWhen you open the drawer, you find a paperclip and sewing thread!\n\n");
                        printf("\n\n\n\n");
                        printf("***** YOU'VE GOT A PAPER CLIP!!! *****\n\n");
                        printf("***** YOU'VE GOT A SEWING LINE!!! *****\n\n");
                        clipe = 1;
                    }
                    else
                    {

                        printf("\n\nNothing else seems useful in this drawer!\n\n");
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


            printf("You see a trash can full of rubbish.\n");
            printf("What do you do?\n1 - Check\n2 - Go Back\n");
            scanf("%i", &menu);
            switch(menu)
            {
            case 1:
                if(codcadeado == 1)
                {
                    printf("\nNothing else seems useful in here.\n\n");
                }
                else
                {
                    printf("\n\nBy going through the trash, you find a paper with a code:");
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
                    printf("***** YOU'VE FOUND THE PADLOCK CODE!!! *****\n");
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

            printf("You see a drain in the floor. What do you do?\n");
            printf("1 - Check\n2 - Go Back\n");
            scanf("%i", &menu);
            switch(menu)
            {
            case 1:
                printf("\n\nYou see a small key at the bottom of the drain, but your hand is too big to pick it up..\n\n");
                if(fio = 1 && clipe == 1)
                {
                    printf("\nDo you want to create a hook with the line and clip?");
                    printf("\n1 - Yes\n2 - No\n");
                    scanf("%i", &combinar);
                    if(combinar == 1)
                    {
                        system("cls");

                        printf("\n\nYou make a kind of hook and you can get the key from inside the drain\n\n");
                        printf("***** YOU'VE GOT THE DOOR KEY ITEM *****\n\n");
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
