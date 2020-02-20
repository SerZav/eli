char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int pos;
	unsigned int pos_dest;

	pos = 0;
	pos_dest = 0;
	while (dest[pos_dest] != '\0')
		pos_dest++;
	while (src[pos] != '\0' && pos < nb)
	{
		dest[pos_dest++] = src[pos++];
	}
	dest[pos_dest] = '\0';
	return (dest);
}
