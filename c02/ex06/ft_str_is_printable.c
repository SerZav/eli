int ft_str_is_printable(char *str)
{
	int pos;
	int r;
	char c;

	r = 1;
	pos = 0;
	while (str[pos] != '\0')
	{
		c = str[pos];
		if (!(c >= ' ' && c <= '~'))
			r = 0;
		pos++;
	}
	return (r);
}
