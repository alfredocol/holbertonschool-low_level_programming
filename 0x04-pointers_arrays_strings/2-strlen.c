/**
 * _strlen - returns the length of a string.
 * @*s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int _strlen(char *s)
{
	int		len = 0;
	
	while (s[len])
		len++;
	return (len);
}
/**
