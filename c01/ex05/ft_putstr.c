#include <unistd.h>

void ft_putstr(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		write(1, &str[pos++], 1);	
	}
}
