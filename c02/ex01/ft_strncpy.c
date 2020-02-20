int ft_strlen(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
		pos++;
	return (pos);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;
	unsigned int len_src;

	pos = 0;
	len_src = ft_strlen(src);
	while (pos < n)
	{
		if (len_src - 1 < pos)
			dest[pos] = '\0';
		else
			dest[pos] = src[pos];
		pos++;
	}
	return (dest);
}

