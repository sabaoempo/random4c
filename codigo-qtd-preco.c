#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo[11], quantidade[11], i;
    float produto[11], faturamento=0, aux;
    for (i=1; i<11; i++)
    {
        printf("Digite o código do produto: \n");
        scanf("%d", &codigo[i]);
        printf("Digite o preço do produto: \n");
        scanf("%f", &produto[i]);
        printf("Digite a quantidade do produto: \n");
        scanf("%d", &quantidade[i]);
        faturamento=(quantidade[i]*produto[i])+faturamento;
        system("pause");
        system("cls");
    }
    printf("O faturamento mensal de todas as mercadorias foi de: %7.3f", faturamento);
}
