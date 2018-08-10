#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int entrada;
    printf("Menu. Digite o número do exercício, de 1 a 14: ");
    scanf("%d", &entrada);
    switch(entrada)
    {
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    }
}
void ex1()
{
    char nome[61], nomeVelho[61], nomeVelha[61], sexo;
    int idade, resposta, velho=0, velha=0;
    float mediaIdade, mediaFem, mediaMasc, percImc;
    int idadeMedia=0, idadeFem=0, idadeMasc=0;
    int contFem=0, contMasc=0, contMed=0, contImc=0;
    float peso, altura, imc;
    do
    {
        printf("Digite o seu nome: ");
        scanf("%s", nome);
        printf("\nSua idade:");
        scanf("%d", &idade);
        idadeMedia = idadeMedia+idade;
        printf("\nSua altura: ");
        scanf("%f", &altura);
        printf("\nSeu peso: ");
        scanf("%f", &peso);
        getchar();
        printf("Sexo (M ou F): ");
        sexo = getchar();
        if (sexo == 'M')
        {
            contMasc++;
            idadeMasc=idadeMasc+idade;
            if (idade > velho)
            {
                velho = idade;
                strcpy(nomeVelho, nome);
            }
        }
        else
        {
            contFem++;
            idadeFem=idadeFem+idade;
            if (idade > velha)
            {
                velha = idade;
                strcpy(nomeVelha, nome);
            }
        }
        contMed++;
        imc = peso/(altura*altura);
        if (sexo == 'F' && imc < 20)
        {
            contImc++;
        }
        printf("O imc de %s é %f", nome, imc);
        printf("\n\nDeseja registrar mais dados? 1 para sim e 0 para não: ");
        scanf("%d", &resposta);
        system("pause");
        system("cls");
    }
    while(resposta != 0);
    mediaIdade = idadeMedia/contMed;
    mediaFem = idadeFem/contFem;
    mediaMasc = idadeMasc/contMasc;
    percImc = (contImc*100)/contFem;
    printf("Idade média geral: %f\nIdade média feminina: %f\nIdade média masculina: %f", mediaIdade, mediaFem, mediaMasc);
    printf("\n\nQuantidade de homens entrevistados: %d\nQuantidade de mulheres entrevistadas: %d", contMasc, contFem);
    printf("\n\nPercentual de mulheres com massa corpórea abaixo do IMC: %f", percImc);
    printf("\n\nMais velho: %s. Idade: %d\nMais velha: %s. Idade: %d", nomeVelho, velho, nomeVelha, velha);
}
void ex2()
{

}
