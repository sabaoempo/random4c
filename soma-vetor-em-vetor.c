#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor1[10], vetor2[10], vetor3[10], i;
    for (i=0; i<10; i++)
    {
        printf("Digite o valor do índice %d do vetor 1: ", i);
        scanf("%d", &vetor1[i]);
    }
    system("pause");
    system("cls");
    for (i=0; i<10; i++)
    {
        printf("Digite o valor do índice %d do vetor 2: ", i);
        scanf("%d", &vetor2[i]);
    }
    system("pause");
    system("cls");
    for (i=0; i<10; i++)
    {
        vetor3[i]=vetor1[i]+vetor2[i];
        printf("\n\nO índice %d do vetor 3 ficou com o valor %d", i, vetor3[i]);
    }
}
