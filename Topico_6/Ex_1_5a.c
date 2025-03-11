#include <stdio.h>

int main()
{
    double notas[20];
    double NotaSearch;
    int i;
    int found = 0;

    for (i = 0; i < 20; i++)
    {
        scanf("%lf", &notas[i]);
    }

    do
    {
        scanf("%lf", &NotaSearch);

        for (i = 0; i < 20; i++)
        {
            if (notas[i] == NotaSearch)
            {
                printf("existe\n");
                found = 1;
                break;
            }
        }

        if (notas[i] != NotaSearch && NotaSearch >= 0)
        {
            printf("nao existe\n");
        }
    }
    while (NotaSearch >= 0);

    return 0;
}