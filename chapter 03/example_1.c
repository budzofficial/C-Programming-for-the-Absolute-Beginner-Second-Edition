/* Turn the air conditioning on when the temperature is greater than
 * or equal to 80 degrees or else turn it off
 * if temperature >= 80
 *	Turn AC on
 * else
 *	Turn AC off
 * end if
 */

#include <stdio.h>

int main(void)
{
	int temperature = 80;

	if (temperature >= 80) {
		printf("Turn AC on\n");
	} else {
		printf("Turn AC off\n");
	}

	return 0;
}
