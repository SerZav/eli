void ft_div_mod(int a, int b, int *div, int *mod)
{
	int r;
	int m;

	r = a / b;
	m = a % b;
	*div = r;
	*mod = m;
}
