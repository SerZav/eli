int ft_strcmp(char *s1, char *s2)
{
	int pos;

	pos = 0;
	while (s1[pos] != '\0')
	{
		if (s2[pos] == '\0')
			return (s1[pos] - s2[pos]);
		else if (s1[pos] > s2[pos])
			return (s1[pos] - s2[pos]);
		else if (s1[pos] < s2[pos])
			return (s1[pos] - s2[pos]);
		else if (s1[pos] == s2[pos])
		pos++;
	}
	if (s2[pos] != '\0')
		return (s1[pos] - s2[pos]);
	return (0);
}
