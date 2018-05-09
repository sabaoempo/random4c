#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int matriz[4][4], num, i, j;
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            matriz[i][j]=0;
        }
    }
    printf("Digite um número. Ele será atribuído a todos os elementos da matriz: ");
    scanf("%d", &num);
    for (i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            matriz[i][j]=matriz[i][j]+num;
            printf("%d\n", matriz[i][j]);
        }
    }
}
