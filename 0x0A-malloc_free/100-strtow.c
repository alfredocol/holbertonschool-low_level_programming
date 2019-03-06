#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int     _strlen(char *s)
{
	int     len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string
 *
 * Return: 2D char array
 */
char **strtow(char *str)
{
	int	i, j, k, len, wrdlen, word = 0;
	char	**word_arr;

	if (!str)
		return (NULL);
	/*Malloc total len of string--should give some extra space*/
	len = _strlen(str);
	word_arr = (char **)malloc(8 * len);
	if (!word_arr)
		return (NULL);
	for (i = 0; str[i] && i < len; i++)
	{
		/*skip over space*/
		while (str[i] && str[i] == ' ')
			i++;
		/*start of word*/
		if (str[i])
		{
			/*get wrdlen*/
			wrdlen = 0;
			for (j = i; str[j] != ' '; j++)
				wrdlen++;
			/*malloc space for new word*/
			word_arr[word] = (char *)malloc(++wrdlen);
			if (!word_arr[word])
				return (NULL);
			/*cpy in word*/
			k = 0;
			while ((str[i] && str[i] != ' ')
				word_arr[word][k++] = str[i++];
			/*NULL terminate word*/
			word_arr[word][k] = '\0';
			word++;
		}
	}
	/*NUll terminate array*/
	word_arr[word] = '\0';
	return (word_arr);
}
