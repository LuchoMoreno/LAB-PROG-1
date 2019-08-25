#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char option;

    do
    {
            printf(":::::::::::::::::::\n");
            printf("(N) New user\n");
            printf("(D) Down user\n");
            printf("(M) Modify user\n");
            printf("(E) Exit\n");
            printf(":::::::::::::::::::\n\n");
            printf("Choose an option: ");
            fflush(stdin);
            scanf("%c", &option);
            option = toupper(option);

            while (option!='N' && option!='D' && option!='M' && option!='E' )
            {
                printf("Wrong option. // Please try it again!\n");
                printf("Choose an option: ");
                fflush(stdin);
                scanf("%c", &option);
                option = toupper(option);
            }

            switch (option)
            {
            case 'N':
                printf("..");
                break;
            case 'D':
                printf("..");
                break;
            case 'M':
                printf("..");
                break;
            case 'E':
                break;
            }

            system("pause");
            system("cls");

    }while (option!='E');


    return 0;
}
