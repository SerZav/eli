void ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int x;

	x = 0;
	while (x < size)
	{
		tab2[x] = tab[size - x - 1];
		x++;
	}
	x = 0;
	while (x < size)
	{
		tab[x] = tab2[x];
		x++;
	}
}	
