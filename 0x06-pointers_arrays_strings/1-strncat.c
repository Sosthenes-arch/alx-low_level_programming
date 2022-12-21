#include "main.h"
/**
 * *_strncat -joins two strings with specified number
 * @dest: copies to
 * @src: copy from
 * @n: this is the number of bytes
 * Return: returns the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
