#include <stdio.h>
#include <string.h>

#define TAM 30

int main()
{
    char frase1[TAM], *pfrase1 = frase1, frase2[TAM], *pfrase2 = frase2;
    int tamanho;

    printf("Digite a primeira string: ");
    fgets(pfrase1, TAM, stdin);

    printf("Digite a segunda string: ");
    fgets(pfrase2, TAM, stdin);

    tamanho = strlen(pfrase1);

    for (int i = 0; i < TAM - 1; i++)
    {
        if (*(pfrase2 + i) == '\0')
            break;
        
        *(pfrase1 + tamanho + i) = *(pfrase2 + i);
    }

    printf("A string concatenada é %s.\n", pfrase1);

    return 0;
}