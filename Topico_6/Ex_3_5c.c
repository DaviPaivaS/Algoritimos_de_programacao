#include <stdio.h>

int main()
{
    int Unidade[10];
    int Dezena[10];
    int i;
    
    for(i=0; i<10; i++)
    {
        scanf("%d", &Unidade[i]);
    }
    for(i=0; i<10; i++)
    {
        scanf("%d", &Dezena[i]);
    }

    printf("%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n", Unidade[0], Dezena[0], Unidade[1], Dezena[1], Unidade[2], Dezena[2], Unidade[3], Dezena[3], Unidade[4], Dezena[4], Unidade[5], Dezena[5], Unidade[6], Dezena[6], Unidade[7], Dezena[7], Unidade[8], Dezena[8], Unidade[9], Dezena[9]);

    return 0;
}