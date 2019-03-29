#include "holberton.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	return ((char)256 ? 0 : 1);
}
