#include <stdio.h>

#define TAM 30

int main()
{
    char frase[TAM], *pfrase = frase, destino[TAM], *pdestino = destino;

    printf("Digite uma string: ");
    fgets(pfrase, 30, stdin);

    for (int i = 0; i < TAM; i++)
    {
        *(pdestino + i) = *(pfrase + i);

        if (*(pfrase + i) == '\0')
            break;
    }

    printf("\nA string digitada foi copiada para uma string destino: %s.\n", pfrase);
    
    return 0;
}