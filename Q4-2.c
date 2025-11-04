#include <stdio.h>

#define TAM 5

int main()
{
    int numeros[TAM], *pint = numeros;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", pint + i);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("\nEndereço do %d° elemento int: %p.\n", i + 1, pint + i);
        printf("Valor do %d° elemento int: %d.\n", i + 1, *(pint + i));
    }
    
    return 0;
}