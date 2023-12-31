#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function that locates a character in a string
 *
 * @s: String to check
 * @c: Character to locate
 *
 * Return: Pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
