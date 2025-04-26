#include <stdio.h>

float f_to_c(float f) {
        return (f -32)*5/9;
}

int main() {
	float temp = 0;
	printf("enter a temperature ");
	scanf("%f", &temp);
        printf("%.1f°F\n", f_to_c(temp));
        return 0;
}

