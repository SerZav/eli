#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int pos;
	int pos_dest;

	pos = 0;
	pos_dest = 0;
	while (dest[pos_dest] != '\0')
		pos_dest++;
	while (src[pos] != '\0')
	{
		dest[pos_dest++] = src[pos++];
	}
	dest[pos_dest] = '\0';
	return (dest);
}
