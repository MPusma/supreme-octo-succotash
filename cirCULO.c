#include <stdio.h>

int main() {
    int i, j, r;
    printf("Ingrese el radio del circulo: ");
    scanf("%d", &r);

    for (i = -r; i <= r; i++) {
        for (j = -r; j <= r; j++) {
            if (i * i + j * j <= r * r) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
    //ggg
}
