/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:39:46 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/13 11:59:22 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;

	aux1 = *a;
	*a = (*a / *b);
	*b = aux1 % *b;
}
/*int main()
{
	int     num1;
        int     num2;
	int *a = &num1;
	int *b = &num2;

	num1 = 70;
	num2 = 21;
	ft_ultimate_div_mod(a,b);
	printf("%d", num1);
	printf("%d", num2);
	return 0;
}*/
