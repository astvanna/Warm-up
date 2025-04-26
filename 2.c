#include <stdio.h>
#define SIZE 5
int arr[SIZE];

int main(){
	float res = 0;
	printf("enter 5 numbers: ");
	
	for(int i = 0; i<SIZE; ++i){
		scanf("%d", &arr[i]);
		res += arr[i];
	}
	res = res/SIZE;
	printf("%f\n", res);
	return 0;
}
