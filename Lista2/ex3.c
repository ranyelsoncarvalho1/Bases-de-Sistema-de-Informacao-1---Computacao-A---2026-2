#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0) {
        printf("O ano e bissexto.\n");
    }
    else if (ano % 100 == 0) {
        printf("O ano nao e bissexto.\n");
    }
    else if (ano % 4 == 0) {
        printf("O ano e bissexto.\n");
    }
    else {
        printf("O ano nao e bissexto.\n");
    }

    return 0;
}
