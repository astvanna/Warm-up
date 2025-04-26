#include <stdio.h>

void mul_table(int n) {
        for(int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", n, i, n*i);
        }
}

int main() {
	int n = 0;
	printf("Enter n ");
	scanf("%d", &n);
        mul_table(n);
        return 0;
}

