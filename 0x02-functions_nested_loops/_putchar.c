#include "main.h"
#include <unistd.h>
/**
<<<<<<< HEAD
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
=======
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */
int _putchar (char c)
>>>>>>> 88ff3d4b10435d52fbfff7f2f2355d89ac5853af
{
	return (write(1, &c, 1));
}
