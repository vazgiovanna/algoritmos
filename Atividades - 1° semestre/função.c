#include <stdio.h>

float menu_float(){
    float res;
    printf("\nInsira um número: ");
    scanf("%f", &res);

    return res;
}
char menu_principal(void){

    char op;
    printf("\nEscolha uma opção: ");
    printf("\n + Soma");
    printf("\n - Subtração");
    printf("\n * Multiplicação");
    printf("\n / Divisão");

    fflush(stdin);
    scanf("%c", &op);

    if (op == '+' || op == '-' || op == '*' || op == '/'){
        return op;
    }
    printf("\nOperação inválida.\n");

    return op;
}
float soma(float parcela1, float parcela2){
    float resultado = parcela1 + parcela2;

    return resultado;
}

int main(){
    char op;
    float res;
    float num1, num2;

    op = menu_principal();

    num1 = menu_float();
    num2 = menu_float();

    switch (op){
    case '+':
        res = soma(num1, num2);
        break;
    case '-':
        break;
    case '*':
        break;
    case '/':
        break;
    default:
        break;
    }

    printf("\n %f %c %f = %f", num1, op, num2, res);

}