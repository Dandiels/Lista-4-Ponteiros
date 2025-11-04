#include <stdio.h>

int main()
{
    int num1, *pnum1 = &num1, num2, *pnum2 = &num2, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", pnum1);

    printf("Digite o segundo número: ");
    scanf("%d", pnum2);

    temp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = temp;

    printf("\nValor do primeiro número trocado: %d.\n", *pnum1);
    printf("Valor do segundo número trocado: %d.\n", *pnum2);
    
    return 0;
}