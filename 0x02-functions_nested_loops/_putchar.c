#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The char to print
 * Return: On Success 1.
 * On error, _1 is retuened, and errno is set appropriatelly
 */

int _putchar(char c)
{
	return (write(1, &c , 1));
}
