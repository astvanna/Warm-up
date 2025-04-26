#include <stdio.h>
#define SIZE 5

int arr1[SIZE];
int arr2[SIZE];

int main(){
	printf("1. Enter 5 numbers: ");
	for(int i = 0; i<SIZE; ++i){
		scanf("%d", &arr1[i]);
	}
	
	printf("2. Enter 5 numbers: ");
        for(int i = 0; i<SIZE; ++i){
                scanf("%d", &arr2[i]);
        }

	for(int i = 0; i<SIZE; ++i){
		printf("%d ", arr1[i] * arr2[i]);
	}
	printf("\n");
	return 0;
}
