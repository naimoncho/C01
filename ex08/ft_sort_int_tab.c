/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:13:49 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/13 12:02:12 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		aux;
	int		count;

	count = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			aux = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = aux;
			count = 0;
		}
		else
			count ++;
	}
}
/*int main()
{
        int tab[8] = {6,3,8,5,4,1,2,7};
        ft_sort_int_tab(tab, 8);
        printf("%d", tab[0]);
        printf("%d", tab[1]);
        printf("%d", tab[2]);
        printf("%d", tab[3]);
        printf("%d", tab[4]);
        printf("%d", tab[5]);
        printf("%d", tab[6]);
        printf("%d", tab[7]);
}*/
