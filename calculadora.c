#include <stdio.h>

int main(){
    int soma, subtracao, div, mult, n1, n2;
    char escolha;

    printf("<<<<<<<<<Menu da Calculadora>>>>>>>>");
    printf("\n+ SOMA");
    printf("\n- SUBTRAÇÃO");
    printf("\n/ DIVISÃO");
    printf("\n* MULTIPLICAÇÃO");
    printf("\nInsira o caractere para escolher");
    scanf("%c", &escolha);

    if (escolha == '+'){
        printf ("Insira o primeiro valor: ");
        scanf("%d", &n1);
        printf("Insira o segundo valor: ");
        scanf("%d", &n2);

        soma = (n1 + n2);
        printf("O resultado: %d", soma);
    }else if (escolha == '-'){
        printf("Insira o primeiro valor: ");
        scanf("%d", &n1);
        printf("Insira o segundo valor: ");
        scanf("%d", &n2);

        subtracao = (n1 - n2);
        printf("O resultado: %d", subtracao);
    }else if(escolha == '/'){
        printf("Insira o primeiro valor: ");
        scanf("%d", &n1);
        printf("Insira o segundo valor: ");
        scanf("%d", &n2);

        div = (n1 / n2);
        printf("O resultado: %d", div);
    }else if(escolha == '*'){
        printf("Insira o primeiro valor: ");
        scanf("%d", &n1);
        printf("Insira o segundo valor: ");
        scanf("%d", &n2);

        mult = (n1 * n2);
        printf("O resultado: %d", mult);
    }else{
        printf("Insira um caractere dentre as opções.");
    }
    
    return 0;
}