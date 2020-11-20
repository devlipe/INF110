#include <stdio.h>
#include <stdlib.h>

float calculo(float a, float b, char c){
    float operacao;
    if (c == '+'){
        operacao = a + b;
        return operacao;
    }
    if (c == '-'){
        operacao = a - b;
        return operacao;
    }
    if (c == '*'){
        operacao = a * b;
        return operacao;
    }
    if (c == '/'){
        operacao = a / b;
        return operacao;
    }
}

int main(){
    float a, b;
    char c;
    scanf("%f %f %c", &a, &b, &c);
    printf("calculo: %f", calculo(a, b, c));
    return 0;
}