char *ft_strupcase(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
		{	
			str[pos] = str[pos] - 32;
		}
		pos++;
	}

	return (str);
}
