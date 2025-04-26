#include <stdio.h>
#define SIZE 5
int arr[SIZE];
int flag = 0;

int main(){
	int tar = 0;
        printf("enter your target: ");
        scanf("%d", &tar);

	printf("enter 5 numbers: ");
	for(int i = 0; i<SIZE; ++i){
		scanf("%d", &arr[i]);
		if(arr[i] == tar){
			++flag;
		}
	}
	if(flag){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
