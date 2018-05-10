#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a[10], b[10];
    int i;
    for (i=0; i<10; i++)
    {
        printf("Digite o elemento do índice %d do vetor: ", i);
        scanf("%f", &a[i]);
        if (i%2==0)
        {
            b[i]=a[i]/2;
        }
        else
        {
            b[i]=a[i]*3;
        }
    }
    system("pause");
    system("cls");
    for (i=0; i<10; i++)
    {
        printf("\nNo índice %d, o valor de b[%d] recebeu %5.2f.", i, i, b[i]);
    }
}
