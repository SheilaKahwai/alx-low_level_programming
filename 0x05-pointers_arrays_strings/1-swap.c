/**
 * swap_int - swaps integers
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
		int x;

		x = *a;
		*a = *b;
		*b = x;
}
