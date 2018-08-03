#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int matGeral[9][9], vetLinha[9], vetLinhaAux[9], vetColuna[9], vetColunaAux[9], matSub[3][3], i, j, k, mais=0;
    setlocale(LC_ALL, "portuguese");
    
    /**Para o usuário digitar os valores de uma matriz**/
    /*for (i=0;i<9;i++){
            for (j=0;j<9;j++){
                printf("Digite o número da posição %d, %d: ", i, j);
                scanf("%d", &matGeral[i][j]);
                if (matGeral[i][j] < 0 || matGeral[i][j] > 9){
                    printf("Número inválido. Digite o valor da posição %d, %d: ", i, j);
                    scanf("%d", &matGeral[i][j]);
                }
                system("cls");
            }
    }*/
    /**Gera valores de 1 a 9 para cada linha da matriz**/
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            mais++;
            matGeral[i][j]=mais;
            if (mais==9){
                mais=0;
            }
        }
    }
    /**Imprime os valores da matriz**/
    /*for (i=0;i<9;i++){
            for (j=0;j<9;j++){
                printf("%d ", matGeral[i][j]);
            }
        printf("\n");
    }*/
    /**Compara os valores das linhas da matriz**/
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            vetLinha[j]=matGeral[i][j];
            if (j==9){
                for(k=0;k<9;k++){
                    vetLinhaAux[k]=vetLinha[k];
                }
                for (i=0;i<9;i++){
                    for (j=0;j<9;j++){
                        if (vetLinha[i]==vetLinhaAux[j]){
                            printf("A matriz inserida não segue os padrões de Sudoku.");
                            system("pause");
                            exit(0);
                        }
                        else{
                            printf("Os números de cada linha não se repetem.");
                        }
                    }
                }
            }
        }
    }
    /**Compara os valores das colunas da matriz**/
    for (i=0;i<9;i++){
        for (j=0;j<9;j++){
            
        }
    }
}
