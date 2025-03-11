#include <stdio.h>

int main()
{
    struct retangulo
    {
        int sup1;
        int sup2;
        int inf1;
        int inf2;
    };

    struct retangulo coord;
    
    int ponto1 = 0;
    int ponto2 = 0;
    int area = 0;

    scanf("%d %d", &coord.sup1, &coord.sup2);
    scanf("%d %d", &coord.inf1, &coord.inf2);

    ponto1 = coord.sup1 - coord.inf1;
    ponto2 = coord.sup2 - coord.inf2;



    area = ponto1 * ponto2;

    printf("%d", area);

    

    return 0;
}