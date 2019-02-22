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

char *infinite_add(char *n, char *m, char *r, int size)
{
	int	nlen = _strlen(n) - 1;
	int	mlen = _strlen(m) - 1;
	int sum;
	int carryover;
	int i;
  
	/*check if size is large enough to hold sum*/
	if (mlen > size || nlen > size)
		return (0);
	while (size--)
	{
		sum = 0;
		carryover = 0;
		//get new sum
		if (m[mlen])
			sum += m[mlen] - '0';
		if (n[nlen])
			sum += n[nlen] - '0';
		//update subscript
		r[size] = sum % 10 + '0';
		//check for carryover
		if (sum > 9)
		{
			if (!size)
				return (0);
			if (r[size - 1] > '0' && r[size - 1] < '9')
			{
				i = 0;
				while (r[size - ++i] && (size - i))
				{
					sum = sum / 10 + (r[size - i] - '0');
					r[size - i] = sum % 10 + '0';
					if (sum < 10)
						break;
				}
			}
		}
		r[size - 1] = sum / 10 + '0';
		mlen--;
		nlen--;
		if (!mlen && !nlen)
			break ;
	}
	
	return (r);
}
int main(void)
{
        char n[] = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char m[] = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                //printf("%s + %s = %s\n", n, m, res);
        }
		/*
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
