int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (str[aux] != '\0')
	{
		aux ++;
	}
	return (aux);
}
/*int main()
{
        char saludo[] = "buenos dias mariposa";
	printf("%d", ft_strlen(saludo));
        return 0;
}*/
