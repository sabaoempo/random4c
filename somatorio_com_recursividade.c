#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somatorio(int num)
{
    if (num==1)
    {
        return 1;
    }
    else
    {
        return (num+somatorio(num-1));
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, soma;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("%d\n", somatorio(num));
    return 0;
}
