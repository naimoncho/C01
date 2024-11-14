/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:05:41 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/13 12:01:07 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
