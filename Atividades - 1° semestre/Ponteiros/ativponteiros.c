#include <stdio.h>

void divisao(int divisor, int dividendo, int * quociente, int * resto){

    if (quociente != NULL){
    *quociente = dividendo/divisor;
    }

    if (quociente != NULL){
    *resto = dividendo%divisor;
    }
}

int main(){
    int v1, v2;
    int q, r;

    printf("\nInsira um divisor: ");
    scanf("%d", &v1);
    printf("\nInsira um dividendo: ");
    scanf("%d", &v2);

    divisao(v1, v2, &q, &r);

    printf("\nValor do quociente: ");
    scanf("%d", q);
    printf("\nValor do resto: ");
    scanf("%d", r);

    return 0;
}