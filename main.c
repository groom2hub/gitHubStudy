#include <stdio.h>

void multiplication();

int main(){
	printf("Hello World!\n");

	multiplication();

	return 0;
}

void multiplication(){
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			printf("%d * %d = %d", i, j, i*j);
		}
	}
}
