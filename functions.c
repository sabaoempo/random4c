#include <stdio.h>
#include <stdlib.h>

int soma_mult(int x, int y, int *soma, int *mult)
{
    *soma=x+y;
    *mult=x*y;
}
int main()
{
    int n1, n2, s, m;
    printf("Programa para somar e multiplicar dois números a partir de uma função.\nDigite o primeiro número: ");
    scanf("%d", &n1);
    printf("\nDigite o segundo número: ");
    scanf("%d", &n2);
    soma_mult(n1, n2, &s, &m);
    printf("Soma = %d, multiplicação = %d\n", s, m);
    system("pause");
}
