#include <stdio.h>

int main(void)
{
	float rate = 0, sales_price = 0, cost = 0, commission = 0;

	printf("Rate: ");
	scanf("%f", &rate);

	printf("Sales Price: ");
	scanf("%f", &sales_price);

	printf("Cost: ");
	scanf("%f", &cost);

	commission = rate * (sales_price - cost);

	printf("Commission: $%.2f\n", commission);

	return 0;
}

