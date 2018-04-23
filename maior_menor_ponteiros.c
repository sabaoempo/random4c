#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior_menor(int *n1, int *n2, int *maior, int *menor)
{
    *maior=*n1;
    *menor=*n2;

    if (*n1 > *n2)
    {
        printf("%d < %d, o primeiro é maior que o segundo", *n2, *n1);
    }

    if (*n1 < *n2)
    {
        *n2=*maior;
        *n1=*menor;
        printf("%d < %d, o segundo é maior que o primeiro", *n2, *n1);
    }
    else if (*n1 == *n2)
    {
        printf("%d = %d, números iguais", *n1, *n2);
    }
}

int main()
{
    int n1, n2, maior, menor;
    setlocale(LC_ALL, "portuguese");
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Segundo número: ");
    scanf("%d", &n2);
    maior_menor(&n1, &n2, &maior, &menor);
}
