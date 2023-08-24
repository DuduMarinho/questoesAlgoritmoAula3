#include <stdio.h>

int main() {
    int base, altura, perimetro, area;

    printf("Informe a base e a altura de seu retangulo: ");
    scanf("%d %d", &base, &altura);

    perimetro = (2*base)+(2*altura);
    area = base * altura;

    printf("O perímetro do retângulo é %dm e a área é %dm²", perimetro, area);

    return 0;
}