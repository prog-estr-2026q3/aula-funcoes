#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10;
    int y = 20;

    printf("Antes do swap:  x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Apos o swap:    x = %d, y = %d\n", x, y);

    return 0;
}
