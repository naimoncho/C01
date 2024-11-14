/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:20:30 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/13 11:58:54 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
