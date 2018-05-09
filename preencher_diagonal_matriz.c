#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[3], matriz[3][3], i, j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Digite o elemento de índice %d, %d da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0; i<3; i++)
    {
        printf("Digite o elemento de índice %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (i==j)
            {
                matriz[i][j]=vetor[i];
            }
            printf("%d\n", matriz[i][j]);
        }
    }
}
