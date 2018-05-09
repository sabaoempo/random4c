#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[10], i, maior=0, menor=0;
    for (i=0; i<10; i++)
    {
        printf("Dígite o elemento do índice %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    maior=vetor[0];
    menor=vetor[0];
    for (i=0; i<10; i++)
    {
        if (vetor[i]>maior)
        {
            maior=vetor[i];
        }
        if (vetor[i]<menor)
        {
            menor=vetor[i];
        }
    }
    for (i=0; i<10; i++)
    {
        if (maior==vetor[i])
        {
            printf("\n\nO maior número do vetor é %d e está na posição %d.", maior, i);
        }
        if (menor==vetor[i])
            {
                printf("\n\nO menor número é %d e está na posição %d.", menor, i);
            }
    }
}
