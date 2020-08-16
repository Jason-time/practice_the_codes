#include <stdio.h>
int main(void) {

	int num1, i,j;
	const int MAX = 9;

	for (i = 1;i <=MAX;i++) {
		for (j = 0;j < MAX;++j) {
			if (MAX < i + j+1)
				printf("*");
			else
				putchar('-');
		}
		putchar('\n');
	}
	return 0;
}

/*==========================================*/