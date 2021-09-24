#include <stdio.h>

int main(){
	int input = 0;
	int result = 1;

	do {
		scanf("%d", &input);
	} while (input < 0 || input > 12); 

	int i;
	for (i = 1; i <= input; i++) {
		result = result * i;
	}
	printf("%d\r\n", result);
	return 0;
}
