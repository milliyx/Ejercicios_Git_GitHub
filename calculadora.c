#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacion;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese la operación (+, -, *, /): ");
    scanf(" %c", &operacion);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        default:
            printf("Operación inválida\n");
            return 1;
    }

    printf("El resultado es: %f\n", resultado);

    return 0;
}

