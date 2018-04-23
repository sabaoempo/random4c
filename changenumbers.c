#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inverter(int *par1, int *par2, int *aux)
{
    *aux=*par1;
    *par1=*par2;
    *par2=*aux;
}

int main()
{
    int par1, par2, aux;
    printf("Parâmetro 1: ");
    scanf("%d", &par1);
    printf("Parâmetro 2: ");
    scanf("%d", &par2);
    inverter(&par1, &par2, &aux);
    printf("P1: %d e P2: %d", par1, par2);
}
