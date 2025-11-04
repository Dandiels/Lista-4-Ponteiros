#include <stdio.h>

#define TAM 5

int main()
{
    double numeros[TAM], *pdouble = numeros;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %d° número double: ", i + 1);
        scanf("%lf", pdouble + i);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("\nEndereço do %d° elemento double: %p.\n", i + 1, pdouble + i);
        printf("Valor do %d° elemento double: %.2f.\n", i + 1, *(pdouble + i));
    }
    
    return 0;
}