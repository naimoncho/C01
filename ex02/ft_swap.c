void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*int main()
{
	int num;
	int num2;
	int *a = &num;
	int *b = &num2;

	num = 4;
	num2 = 3;	
	ft_swap(a,b);
	printf("%d", num);
	printf("%d", num2);
	return 0;
}*/
