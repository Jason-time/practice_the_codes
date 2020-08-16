#include <stdio.h>
int main(void) {


	int num1, i,j;
	const int MAX = 9;

	for (i = 0;i < MAX;i++) {
		for (j = 0;j < i + 1;++j) {
			printf("* ");
		}
		putchar('\n');
	}


	return 0;
}