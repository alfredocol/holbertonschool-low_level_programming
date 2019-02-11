#include <unistd.h>
#include <holberton.h>

void	_putchar(int c);

/**
 * holberton - prints "Holberton"
 * @void: void
 *
 * Description: prints Holberton folowed by a new line
 * Return: ;
 */
void	holberton()
{
	char 	*holberton = "Holberton\n";
	int	i;
	
	while (*holberton)
		_putchar(*holberton++);
} 

/**
 * main - calls holberton() helper function, returns 0
 * @void: void
 *
 * Description: print Holberton followed by a newline
 * Return: 0
 */	
int	main(void)
{
	holberton();
	return (0);
}
