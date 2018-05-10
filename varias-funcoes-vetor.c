#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j;
int main()
{
    setlocale(LC_ALL, "portuguese");
    int A[10] = {45, 47, 79, 92,67,40,41,75,71,38},  B[10] = {68,5,47,15,38,95,-47,45,92,3}, C[10], D[10], E[10], F[20], G[10], entrada;
    do
    {
        printf("Bem vindo(a) ao menu!\n");
        printf("1 - Multiplicar vetores\n2 - Somar vetores\n3 - Subtrair vetores\n4 - União de vetores\n5 - Intersecção de vetores\n6 - Encerrar o programa\n\n");
        scanf("%d", &entrada);
        switch(entrada)
        {
        case 1:
            system("pause");
            system("cls");
            multiplica(A, B, C);
            break;
        case 2:
            system("pause");
            system("cls");
            soma(A, B, D);
            break;
        case 3:
            system("pause");
            system("cls");
            subtracao(A, B, E);
            break;
        case 4:
            system("pause");
            system("cls");
            uniao(A, B, F);
            break;
        case 5:
            system("pause");
            system("cls");
            interseccao(A, B, G);
            break;
        case 6:
            printf("O programa será encerrado.");
            break;
        }
    }
    while(entrada!=6);
    return 1;
}

void multiplica(int A[10], int B[10], int C[10])
{
    for (i=0; i<10; i++)
    {
        C[i]=A[i]*B[i];
        printf("\n\nA multiplicação de A[%d] e B[%d], no índice %d de C, é: %d", i, i, i, C[i]);
    }
    system("pause");
    system("cls");
}
void soma(int A[10], int B[10], int D[10])
{
    for (i=0; i<10; i++)
    {
        D[i]=A[i]*B[i];
        printf("\n\nA adição de A[%d] e B[%d], no índice %d de D, é: %d", i, i, i, D[i]);
    }
    system("pause");
    system("cls");
}
void subtracao(int A[10], int B[10], int E[10])
{
    for (i=0; i<10; i++)
    {
        E[i]=A[i]*B[i];
        printf("\n\nA subtração de A[%d] e B[%d], no índice %d de E, é: %d", i, i, i, E[i]);
    }
    system("pause");
    system("cls");
}
void uniao(int A[10], int B[10], int F[20])
{
    //inserir
}
void interseccao(int A[10], int B[10], int G[10])
{
    //inserir
}
