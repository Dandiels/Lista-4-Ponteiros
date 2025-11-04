#include <stdio.h>

#define TAM 30

int main()
{
    char frase[TAM], *pfrase = frase, caractere, *pchar = &caractere;

    printf("Digite uma string: ");
    fgets(pfrase, TAM, stdin);

    printf("Digite um caractere: ");
    scanf(" %c", pchar);

    for (int i = 0; i < TAM; i++)
    {
        if (*(pfrase + i) == '\0')
        {
            printf("Sua string não contém esse caractere.\n");
            break;
        }
        else if (*(pfrase + i) == *pchar)
        {
            printf("Sua string contém esse caractere.\n");
            break;
        }
    }
    
    return 0;
}