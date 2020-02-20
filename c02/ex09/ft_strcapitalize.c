int ft_islowcase(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}

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

int	ft_endw(char x)
{
	if ((x >= ' ' && x <= '/') || (x >= ':' && x <= '?'))
		return (1);
	return (0);
	}

char *ft_strcapitalize(char *str)
{
	int pos;
	int wpos;
	int isword;

	ft_strlowcase(str);
	pos = 0;
	while (str[pos] != '\0')
	{
		wpos = pos;
		isword = 0;
		if (ft_endw(str[pos]) == 0)
		{
			isword = 1;
			while (ft_endw(str[pos]) == 0 && str[pos] != '\0')
			{
				if (ft_islowcase(str[pos]) == 0)
					isword = 0;
				pos++;
			}
		}
		else
			pos++;
		if (isword == 1)
			str[wpos] = str[wpos] - 32;
	}
	return (str);
}
