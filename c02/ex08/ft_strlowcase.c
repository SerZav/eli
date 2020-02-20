char *ft_strlowcase(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{	
			str[pos] = str[pos] + 32;
		}
		pos++;
	}

	return (str);
}
