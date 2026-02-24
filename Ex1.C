#include <stdio.h>

int main() {
    float salarioMinimo, salarioBruto, qtd;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salarioBruto);

    qtd = salarioBruto / salarioMinimo;

    printf("A pessoa ganha %.2f salarios minimos.\n", qtd);

    return 0;
}
