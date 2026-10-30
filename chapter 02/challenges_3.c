#include <stdio.h>

int main(void)
{
	char user_name[10] = "\0";

	printf("Username: ");
	scanf(" %s", user_name);

	printf("Hello %s\n", user_name);

	return 0;
}
