/* if target hit == true
 *	Incrementing player score
 * end if
 */

#include <stdio.h>

int main(void)
{
	int target = 1, hit = 1, score = 0;

	if (target == hit) {
		score++;
		printf("Score: %d\n", score);
	} // end if

	return 0;
}
