void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = a % b;
}
/*int main()
{
	int aux;
	int aux2;
	int a;
	int b;
	int *div = &aux;
	int *mod = &aux2;

	a = 100;
	b = 27;
	ft_div_mod(a,b,div,mod);
	printf("%d", aux);
        printf("%d", aux2);
        return 0;
}*/
