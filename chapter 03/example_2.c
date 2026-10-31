/* Allow a customer to deposit or withdraw money from a bank account,
 * and if a user elects to withdraw funds, ensure that sufficient
 * monies exist.
 *
 * if action == deposit
 *	Deposit funds into account
 * else
 *	if balance < withdraw amount
 *		Insufficient funds for transaction
 *	else
 *		Withdraw monies
 *	end if
 * end if
 */

#include <stdio.h>

int main(void)
{
	float balance = 0, deposit = 0, withdraw = 0;
	int action = 0;

	do {
		//Menu Selection
		printf("\n\tPseudo Code Translation\n");
		printf("1\tDeposit\n");
		printf("2\tWithdraw\n");
		printf("3\tExit!\n");
		printf("Select (1 - 3): ");
		scanf("%d", &action);

		if (action == 1) {
			//Deposit Logic
			printf("Enter amount to deposit: ");
			scanf("%f", &deposit);

			balance = balance + deposit;

			printf("\nNew Balance: $%.2f\n", balance);
		} else if (action == 2) {
			//Withdraw Logic
			printf("Enter amount to withdraw: ");
			scanf("%f", &withdraw);

			if (balance < withdraw) {
				printf("Insufficient funds for transaction\n");
			} else {
				balance = balance - withdraw;
				printf("\nNew Balance: $%.2f\n", balance);
			} // end nested if
		} else if (action != 3) {
			printf("Invalid option. Please try again.\n");
		} // end if

	}while (action != 3); // end do while loop

	return 0;
}
