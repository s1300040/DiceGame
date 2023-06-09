#include <stdio.h>
#include <stdlib.h>

int getRandom() {
    return rand() % 6 + 1;
}

int main() {
    int a = getRandom();
    int b = getRandom();

    printf("Rolling dice...\n");
    printf("Die 1: %d\n", a);
    printf("Die 2: %d\n", b);
    printf("Total value: %d\n", a + b);

    return 0;
}