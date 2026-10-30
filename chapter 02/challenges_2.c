#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, x = 0, y = 0, f;

	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("X: ");
	scanf("%d", &x);
	printf("Y: ");
	scanf("%d", &y);

	f = (a - b) * (x - y);

	printf("%d\n", f);

	return 0;
}
