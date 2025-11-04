#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main()
{
    srand(time(NULL));
    
    int x[TAM*2], f[TAM] = {0};

    puts("Vetor gerado:\n");

    for (int i = 0; i < TAM * 2; i++)
    {
        x[i] = rand() % TAM;
        printf("%d° número: %d.\n", i + 1, x[i]);
    }

    puts("\nVetor de ocorrências dos elementos de X:\n");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM * 2; j++)
        {
            if (x[j] == i)
                f[i]++;
        }

        printf("Ocorrências do número %d: %d.\n", i, f[i]);
    }
    
    return 0;
}