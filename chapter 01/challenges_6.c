#include <stdio.h>

int main(void)
{
	int n = 5;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		} // end nested for loop
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		} //end nested for loop
		printf("\n");
	} //end for loop

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		} //end nested for loop
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		} // end nested for loop
		printf("\n");
	} //end for loop

	return 0;
}
