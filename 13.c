#include <stdio.h>

int fact(int n) {
        int res = 1;
        for (int i = 1; i <= n; ++i) {
                res *= i;
        }
        return res;
}

int main() {
	int n = 0;
	printf("enter n ");
	scanf("%d", &n);
        printf("%d\n", fact(n));
        return 0;
}

