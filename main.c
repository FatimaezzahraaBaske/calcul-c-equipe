#include <stdio.h>


int produit(int a, int b);
float moyenne(int a, int b);

int produit(int a, int b) {
    return a * b;
}

float moyenne(int a, int b) {
    return (a + b) / 2.0;
}

int main() {

    printf("message de la branche feature\n");


    int x = 5, y = 3;
    printf("Le produit de %d et %d est : %d\n", x, y, produit(x, y));
    printf("La moyenne de %d et %d est : %.2f\n", x, y, moyenne(x, y));

    return 0;
}