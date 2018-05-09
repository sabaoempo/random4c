#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int indices_pares(int vetor[10])
{
    int soma=0, i;
    for (i=0; i<10; i++)
    {
        if (i%2==0)
        {
            soma=soma+vetor[i];
        }
    }
    printf("A soma dos índices pares é: %d", soma);
    return 0;
}

int indices_impares(int vetor[10])
{
    int soma=0, i;
    for (i=0; i<10; i++)
    {
        if (i%2!=0)
        {
            soma=soma+vetor[i];
        }
    }
    printf("A soma dos índices ímpares é: %d", soma);
    return 0;
}

int main()
{

    setlocale(LC_ALL, "portuguese");
    int vetor[10], i, num;
    for (i=0; i<10; i++)
    {
        printf("Digite o número do índice %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\nDigite 1 para a soma dos índices pares e 2 para a soma dos índices ímpares: ");
    scanf("%d", &num);
    switch(num)
    {

    case 1:
        indices_pares(vetor);
        break;

    case 2:
        indices_impares(vetor);
        break;
    }
}
