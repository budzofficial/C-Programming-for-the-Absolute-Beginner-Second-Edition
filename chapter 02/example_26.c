#include <stdio.h>

int main(void)
{
	int iOperand1 = 0;
	int iOperand2 = 0;
	int iResult = 0;

	printf("\n\tAdder Program, by Michael Vine\n");
	printf("\nEnter first operand: ");
	scanf("%d", &iOperand1);
	printf("Enter second operand: ");
	scanf("%d", &iOperand2);

	iResult = iOperand1 + iOperand2;

	printf("The result is %d\n", iResult);

}
