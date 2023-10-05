#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;       // Un pointeur normal pointant vers x
    int **doublePtr = &ptr; // Un double pointeur pointant vers ptr

    printf("Valeur de x : %d\n", x);
    printf("Valeur pointée par ptr : %d\n", *ptr);
    printf("Valeur pointée par doublePtr : %d\n", **doublePtr);

    return 0;
}
