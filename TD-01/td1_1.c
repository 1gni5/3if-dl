#include <stdio.h>

int main() {

	int i, sum = 0;
	for (i=0; i<3; i++) {
		int input;
		scanf("%d", &input);
		sum += input;
	}

	printf("%d\r\n", sum);
	return 0;
}
