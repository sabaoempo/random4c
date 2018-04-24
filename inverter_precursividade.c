#include <stdio.h>
#include <stdlib.h>
//inverter código para inverter o contador. Código feito pelo professor Roberto e utilizado em aulas de laboratório

void cont (int);
main()
{
    cont(1);
}
void cont(int n)
{
    if (n < 10)
        cont(n+1);
    printf("%d\n", n);
}
