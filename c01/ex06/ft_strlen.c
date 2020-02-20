int ft_strlen(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
		pos++;
	return (pos);
}
