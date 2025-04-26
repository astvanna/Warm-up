#include <stdio.h>

void mul_table() {
        for (int i = 1; i <= 10; i++) {
                printf("\nMul table %d:\n", i);
                for (int j = 1; j <= 10; j++) {
                        printf("%d x %d = %d\n", i, j, i*j);
                }
        }
}

int main() {
        mul_table();
        return 0;
}

