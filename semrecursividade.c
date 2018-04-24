#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //somatório sem recursividade
    setlocale(LC_ALL, "portuguese");
    int num, soma;
    printf("Digite um número: ");
    scanf("%d", &num);
    soma=num;
    while (num != 0)
    {
        soma=soma+(num-1);
        num--;
    }
    printf("Somatório sem recursividade:  %d", soma);
}
