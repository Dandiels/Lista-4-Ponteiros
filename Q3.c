#include <stdio.h>

int main()
{
    int numero, *pnum = &numero, menor;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", pnum);

    menor = *pnum;

    while (*pnum >= 0)
    {
        printf("Digite outro número: ");
        scanf("%d", pnum);

        if (*pnum < menor)
            menor = *pnum;
        
        printf("\nO menor número digitado até agora foi %d.\n\n", menor);
    }

    puts("Fim do programa.");        
    
    return 0;
}