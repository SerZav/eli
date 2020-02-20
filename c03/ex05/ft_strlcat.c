unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int pos;
	unsigned int dest_len;

	pos = 0;
	dest_len = 0;
	while (dest[pos] != 0 && pos < size)
		pos++;
	if (pos == size)
		return (pos);
	dest_len = pos;
	while (src[pos - dest_len] != '\0' && pos < size - 1)
	{
		dest[pos] = src[pos - dest_len];
		pos++;
	}
	if (pos < size)
	{
		dest[pos] = 0;
		return (pos + 1);
	}
	return (pos + 1);
}
