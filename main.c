#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    if (delta < 0) printf("Não existem raízes reais\n");
    else {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes: %.2f e %.2f\n", raiz1, raiz2);
    }
}

int main() {
    float a, b, c;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    calcularRaizes(a, b, c);
    return 0;
}
