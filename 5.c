#include <stdio.h>
#define SIZE 5
char arr[SIZE];

int main() {
	char output;
	printf("Enter 5 characters: ");
	for(int i =0; i<SIZE; ++i){
	    scanf("%c", &arr[i]);
	    arr[i] = arr[i] & ~32;
	}
	for(int i = 0; i<SIZE; ++i){
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}

