#include "main.h"
/**
* swap_int - swaps the value of int a and int b
* @a: first int
* @b: second int
* Retur: 0
*/
void swap_int(int *a, int *b)
{
		int k;

		k = *a;
		*a = *b;
		*b = k;
}
