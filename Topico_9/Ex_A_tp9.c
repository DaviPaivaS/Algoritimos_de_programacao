#include <stdio.h>
#include <math.h>

void volume_esfera ();

int main()
{
    volume_esfera();
    return 0;
}

void volume_esfera ()
{
    float volume;
    float raio;

    scanf("%f", &raio);
    
    volume = (4.0/3.0) * 3.14159 * pow(raio, 3);
    printf("%.2f\n", volume);
}