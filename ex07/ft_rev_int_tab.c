void	ft_rev_int_tab(int *tab, int size)
{
	int	change;
	int	y;

	y = 0;
	while (y <= size)
	{
		change = tab[y];
		tab[y] = tab[size - 1];
		tab[size - 1] = change;
		y ++;
		size --;
	}
}
/*int main()
{
	int tab[8] = {1,2,3,4,5,6,7,8};
	ft_rev_int_tab(tab, 8);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
	printf("%d", tab[5]);
	printf("%d", tab[6]);
	printf("%d", tab[7]);
}*/
