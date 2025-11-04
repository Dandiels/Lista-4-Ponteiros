#include <stdio.h>

#define TAM 5

int main()
{
    float numeros[TAM], *pfloat = numeros;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %d° número float: ", i + 1);
        scanf("%f", pfloat + i);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("\nEndereço do %d° elemento float: %p.\n", i + 1, pfloat + i);
        printf("Valor do %d° elemento float: %.2f.\n", i + 1, *(pfloat + i));
    }
    
    return 0;
}