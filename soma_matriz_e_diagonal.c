#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[3][3], i, j, soma=0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Digite o índice %d, %d da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma=soma+matriz[i][j];
        }
    }
    printf("\nA soma dos elementos da matriz é: %d", soma);
    soma=0;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
            if (i==j)
        {
            soma=soma+matriz[i][j];
        }
    }
    printf("\n\nA soma dos elementos da diagonal principal da matriz é: %d", soma);
}
