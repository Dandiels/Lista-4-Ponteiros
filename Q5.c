#include <stdio.h>

#define TAM 30

int main()
{
    char frase[TAM], *pstring = frase;
    unsigned char tamanho = 0;

    printf("Digite uma string: ");
    fgets(pstring, 30, stdin);

    for (int i = 0; i < TAM - 1; i++)
    {
        if (*(pstring + i) == '\0')
            break;
        
        tamanho++;
    }

    printf("\nO tamanho da string fornecida é de %hhu caracteres.\n", tamanho);
    
    return 0;
}