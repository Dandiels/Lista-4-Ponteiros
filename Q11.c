#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main()
{
    srand(time(NULL));
    
    int x[TAM*2], y[TAM*2], m[TAM][TAM] = {0};

    puts("\nVetores gerados:\n");

    for (int i = 0; i < TAM * 2; i++)
    {
        x[i] = rand() % TAM;
        printf("%d° número de X: %d.\n", i + 1, x[i]);

        y[i] = rand() % TAM;
        printf("%d° número de Y: %d.\n\n", i + 1, y[i]);
    }

    for (int j = 0; j < TAM * 2; j++)
    {
        m[y[j]][x[j]]++;
    }

    puts("Vetor de coocorrências dos elementos de X e Y:\n");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%d\t", m[i][j]);

            if (!((j + 1) % TAM))
                printf("\n\n");
        }
    }
    
    return 0;
}