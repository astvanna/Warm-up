#include <stdio.h>
int main(){
        int i = 1;
        int prev_fib = 0;
        int next_fib = 0;
        int n = 0;

        printf("Enter n ");
        scanf("%d", &n);

        next_fib = 1;
        for(i=1; i<n; i++){
                int tmp = next_fib;
                next_fib += prev_fib;
                prev_fib = tmp;
        }

        printf("%d\n", next_fib);
        return 0;

}
