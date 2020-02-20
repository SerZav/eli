void ft_sort_int_tab(int *tab, int size)
{
	int tab2[size];
	int x;
	int y;
	int temp;
	int v;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			v = y < size ? 1 : 0;
			if (tab[y] > tab[y + v])
			{
				temp = tab[y];
				tab[y] = tab[y + v];
				tab[y + v] = temp;
			}
			y++;
		}
		x++;
	}
}
