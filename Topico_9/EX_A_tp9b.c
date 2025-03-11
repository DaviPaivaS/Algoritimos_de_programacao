#include <stdio.h>
#include <math.h>

int A[10];
int B[10];

void cubo(int A[])
{
    for(int i = 0; i < 10; i++)
    {
        B[i] = pow(A[i], 3);
        printf("%d\n", B[i]);
    }
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    cubo(A);
    return 0;
}