#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor_1[10];
    int soma=0, i;
    for (i=0; i<10; i++)
    {
        printf("\nDigite o número %d: ", i+1);
        scanf("%d", &vetor_1[i]);
        soma=soma+vetor_1[i];
    }
    printf("\nA soma é: %d", soma);
    return 0;
}
