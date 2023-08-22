#include "main.h"

/**
 * swap_int - Swap numbers
 * @a: 1st no
 * @b: 2nd no
 *
 * Description: This function swaps the number
 * of 2 values.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
