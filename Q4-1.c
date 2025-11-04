#include <stdio.h>

#define TAM 5

int main()
{
    char caracteres[TAM], *pchar = caracteres;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %d° caractere: ", i + 1);
        scanf("%c", pchar + i);
        getchar();
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("\nEndereço do %d° elemento char: %p.\n", i + 1, pchar + i);
        printf("Valor do %d° elemento char: %c.\n", i + 1, *(pchar + i));
    }
    
    return 0;
}