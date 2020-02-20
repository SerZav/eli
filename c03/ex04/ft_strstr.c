char *ft_strstr(char *str, char *to_find)
{
	int posx;
	int posy;
	int res;

	posx = 0;
	posy = 0;
	res = 0;
	if (to_find[0] == 0)
		return (&str[0]);
	while (str[posx] != '\0')
	{
		if (str[posx] == to_find[0])
		{
			res = 1;
			posy = posx;
			while (to_find[posy - posx] != '\0')
			{
				if(to_find[posy - posx] != str[posy])
					res = 0;
				posy++;
			}
		}
		if (res == 1)
			return (&str[posx]);
		posx++;
	}
	if (res == 1)
		return (&str[posx]);
	return (0);
}
