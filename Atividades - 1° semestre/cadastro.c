#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define CADASTROS 100

int main(){
    char nome[CADASTROS][80];
    char endereco[CADASTROS][100];
    int idade[CADASTROS];
    int matricula[CADASTROS];
    int pos = 0;
    int resposta, escolha, consultaMatricula;

    system("cls");
    printf("\nUniversidade Católica de Brasília\n");
    printf("<<Cadastro de Alunos>>\n");

    while(pos < CADASTROS){
        printf("\nMatrícula: %d\n", pos);
        printf("\nNome: ");
        scanf(" %[^\n]", nome[pos]);
        printf("\nEndereço completo: ");
        scanf(" %[^\n]", endereco[pos]);
        printf("\nIdade: ");
        scanf("%d", &idade[pos]);

        matricula[pos] = pos;
        pos++;

        system("cls");
        printf("\nDeseja realizar outro cadastro?");
        printf("\nInsira 0 para sim, ou 1 para não.");
        scanf("%d", &resposta);

        if(resposta == 0){
            continue;
        }else{
            while(1){
                printf("\n1. Realizar uma consulta");
                printf("\n2. Retornar ao cadastro");
                printf("\n3. Sair.\n");
                scanf("%d", &escolha);

                system("cls");

                if(escolha == 1){
                    printf("Insira o número da matrícula que deseja consultar: ");
                    scanf("%d", &consultaMatricula);

                    if(consultaMatricula >= 0 && consultaMatricula < pos){
                        printf("Matrícula: %d\n", consultaMatricula);
                        printf("Nome: %s\n", nome[consultaMatricula]);
                        printf("Endereço: %s\n", endereco[consultaMatricula]);
                        printf("Idade: %d\n", idade[consultaMatricula]);
                    } else {
                        printf("Matrícula não encontrada.\n");
                    }
                }else if(escolha == 2){
                    break;
                } else if(escolha == 3){
                    return 0; 
                } else {
                    printf("Escolha um número válido do menu!\n");
                }
            }
        }
    }

    return 0;
}
