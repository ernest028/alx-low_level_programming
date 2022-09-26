#include "main.h"

#include "main.h"

/**
 *  *_memset -   fills memory with a constant byte
 *
 *   *@s: pointer block of memory to fill
 *
 *    *@b: constant byte
 *
 *     *@n: bytes of the memory
 *
 *      *Return: dest
 */
char *_memset(char *s, char b, unsigned int n)

{
		/**
		 *	* declare an unsigned int
		 *
		 *	* because we are storing a
		 *
		 *	* value that will always be
		 *
		 *	* non-negative (zero or positive)
		 *
		 */

	unsigned int i;

	for (i = 0; i < n; i++)

		s[i] = b;
	return (s);
}
