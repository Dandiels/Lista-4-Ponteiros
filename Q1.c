#include <stdio.h>

int main()
{
    int num1, *pnum1 = &num1, num2, *pnum2 = &num2, soma, *psoma = &soma;

    printf("Digite o primeiro número: ");
    scanf("%d", pnum1);

    printf("Digite o segundo número: ");
    scanf("%d", pnum2);

    *psoma = *pnum1 + *pnum2;

    printf("\nEndereço de memória da soma dos dois números digitados: %p.\n", psoma);
    printf("Valor resultante da soma dos dois números digitados: %d.\n", *psoma);
    
    return 0;
}