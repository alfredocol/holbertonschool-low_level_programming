#include <unistd.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
int	_strlen(char *s)
{
	int	len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
char	*_bzero(char r[], int size)
{
	char	*p = r;
	
	while (size--)
		*p++ = '0';
	return (r);
}
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
char	*add(char r[], int n, int i)
{
	int	sum;
	
	sum = r[i] - '0' + n;
	r[i] = sum % 10 + '0';
	if (sum > 9)
	{
		if (!i)
			return (0);
		r = add(r, sum / 10, i - 1);
	}
	return (r);
} 
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
char	*benotzero(char *r, int offset, int len)
{
	int	i = 0;
	int	end = len - offset;
	printf("%d\n", offset);
	while (i < end)
	{
		r[i] = r[i + offset];
		i++;
	}

	int	j = -1;
	while (++j < 6)
		printf("%c", r[j]);
	printf("\n");
	return (r);
}
/**
 * _strlen - returns the length of a string.
 * @s: string
 *
 * Description: returns the length of a string.
 * Return: len of string
 */
char *infinite_add(char *n, char *m, char *r, int size)
{
	int	nlen = _strlen(n);
	int	mlen = _strlen(m);
	int	sum;
  	int	len = size;

	r = _bzero(r, size);		
	if (mlen - 1 > size || nlen - 1 > size)
		return (0);
	while (size--)
	{
		mlen--;
		nlen--;
		sum = 0;
		if (mlen > -1)
			sum += m[mlen] - '0';
		if (nlen > -1)
			sum += n[nlen] - '0';
		if (!(r = add(r, sum, size)))
			return (0);
		if (mlen <= 0 && nlen <= 0)
			break ;
	}
	r = benotzero(r, size, len);
	return (r);
}
int main(void)
{
        //char n[] = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        //char m[] = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char	n[] = "1934";
	char	m[] = "299";
	char r[6];
        char *res;

        res = infinite_add(n, m, r, 2);
        //printf("%s\n", res = infinite_add(n, m, r, 6));
        /*if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                //printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }*/
        return (0);
}
