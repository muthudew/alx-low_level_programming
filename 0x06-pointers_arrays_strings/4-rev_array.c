#include"main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: pointer to an array
 * @n: number of element in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
