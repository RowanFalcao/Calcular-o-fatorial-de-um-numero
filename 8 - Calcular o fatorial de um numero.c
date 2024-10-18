#include <stdio.h>

int main() {
    int num, i, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i) {
        fatorial *= i;
    }

    printf("O fatorial de %d eh: %d\n", num, fatorial);
    return 0;
}
