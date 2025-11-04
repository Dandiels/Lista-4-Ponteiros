#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define MAX 100

int main()
{
    srand(time(NULL));
    
    int numeros[TAM], *pnumeros = numeros;

    for (int i = 0; i < TAM; i++)
    {   
        *(pnumeros + i) = rand() % MAX;
    }

    puts("Vetor gerado: \n");

    for (int i = 0; i < TAM; i++)
    {
        printf("%d° número: %d.\n", i + 1, *(pnumeros + i));
    }

    for (int i = 1; i < TAM; i++)
    {
        int trocou = 0, temp;

        for (int j = 0; j < TAM - i; j++)
        {
            if (*(pnumeros + j) > *(pnumeros + j + 1))
            {
                temp = *(pnumeros + j);
                *(pnumeros + j) = *(pnumeros + j + 1);
                *(pnumeros + j + 1) = temp;
                trocou = 1;
            }
        }

        if (!trocou)
            break;
    }

    puts("\nVetor ordenado: \n");

    for (int i = 0; i < TAM; i++)
    {
        printf("%d° número: %d.\n", i + 1, *(pnumeros + i));
    }

    return 0;
}