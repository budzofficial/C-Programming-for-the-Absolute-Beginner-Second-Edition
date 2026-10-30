#include <stdio.h>

int main(void)
{
	float price = 0, quantity = 0, total = 0;

	printf("Price: ");
	scanf("%f", &price);
	printf("Quantity: ");
	scanf("%f", &quantity);

	total = price * quantity;

	printf("Total Revenue: $%.2f\n", total);

	return 0;
}
