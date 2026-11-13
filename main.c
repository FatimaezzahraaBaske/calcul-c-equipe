#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    printf("Projet collaboratif\n");

    int x = 5, y = 3;
    printf("Le produit de %d et %d est : %d\n", x, y, produit(x, y));
    
    return 0;
}