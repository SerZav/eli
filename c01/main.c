#include <stdio.h>
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int *ptr;
	int a;
	int *********nbr2;
	int x;
	int y;
	int *xx;
	int *yy;
	int *d;
	int *m;
	int dd;
	int mm;
	int aa1;
	int bb1;
	int *aa;
	int *bb;
	char *strx;
	int enteros[1] = {18};
	int strl;
	int itest;

	ptr = &a;
	ft_ft(ptr);
	printf("%d\n", a);
	
	ft_ultimate_ft(nbr2);
	
	x = 1;
	y = 2;
	xx = &x;
	yy = &y;
	ft_swap(xx, yy);
	printf("xx:%d  yy:%d\n",*xx, *yy);

	dd = 0;
	mm = 0;
	d = &dd;
	m = &mm;
	ft_div_mod(10, 3, d, m);
	printf("*d:%d / *m:%d\n", *d, *m);

	aa1 = 10;
	bb1 = 3;
	aa = &aa1;
	bb = &bb1;
	ft_ultimate_div_mod(aa, bb);
	printf("ft_ultimate_div_mod a:%d / b:%d\n", *aa, *bb);


	strx = "hola";
	ft_putstr(strx);
	strl = ft_strlen(strx); 
	printf("ftrlen: %d\n", strl);

	ft_rev_int_tab(enteros, 7);
	printf("\ninvertir: \n");
	
	itest = 0;
	while (itest < 7)
	{
		printf("%d", enteros[itest]);
		itest++;
	}


	printf("\norden: \n");
	ft_sort_int_tab(enteros, 7);
	
	itest = 0;
	while (itest < 7)
	{
		printf("%d", enteros[itest]);
		itest++;
	}

}

