#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main()
{
    srand(time(NULL));
    
    int x[TAM*2], y[TAM*2], m[TAM][TAM] = {0};
    float r = 0.0f;

    while (!r) r = (((float)rand() / RAND_MAX) * 10.0f);

    puts("Vetor gerado:\n");

    for (int i = 0; i < TAM * 2; i++)
    {
        x[i] = rand() % TAM;
        printf("%d° número de X: %d.\n", i + 1, x[i]);

        if (r > 0.0f && r <= 3.0f)
            y[i] = x[i];
        else if (r > 3.0f && r <= 5.0f)
            y[i] = (x[i] - 1) < 0 ? -(x[i] - 1) : (x[i] - 1);
        else if (r > 5.0f && r <= 7.0f)
            y[i] = (x[i] + 1) > (TAM - 1) ? (x[i] + 1) % TAM : (x[i] + 1);
        else if (r > 8.0f && r <= 9.0f)
            y[i] = (x[i] - 2) < 0 ? -(x[i] - 2) : (x[i] - 2);
        else
            y[i] = (x[i] + 2) > (TAM - 1) ? (x[i] + 2) % TAM : (x[i] + 2);

        printf("%d° número de Y: %d.\n\n", i + 1, y[i]);
    }

    for (int j = 0; j < TAM * 2; j++)
    {
        m[y[j]][x[j]]++;
    }

    puts("Vetor de ocorrências dos pares de X e Y:\n");

    for (int k = 0; k < TAM; k++)
    {
        for (int i = 0; i < TAM; i++)
        {
            printf("Ocorrências do par (%d, %d): %d.\n", k, i, m[k][i]);
        }
    }
    
    return 0;
}