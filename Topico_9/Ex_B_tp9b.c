#include <stdio.h>

int A, B, C, D;
int Z, W;

void soma(int A, int B, int C, int D)
{
   Z = A + C;
   W = B + D;

   printf("%d + %di\n", Z, W);
}
void mult()
{
    Z = ((A * C)-(B * D));
    W = ((A * D)+(B * C));
    printf("%d + %di\n", Z, W);
}
int main()
{   
    char operador;

    scanf("%d %d %c %d %d", &A, &B, &operador, &C, &D);
    if(operador == '+')
    {
    soma(A, B, C, D);
    }
    if(operador == '*')
    {
    mult(A, B, C, D);
    }
    return 0;
}