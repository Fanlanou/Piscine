/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:03:05 by jbagomed          #+#    #+#             */
/*   Updated: 2023/05/01 16:42:50 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{	
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		size--;
	}
}

/*int	main()
{
	int	tab[] = {9, 7, 6, 11, 3};
	int	size = 5;
	int	i = 0;

	ft_sort_int_tab(tab, size);
	while (tab[i] <= tab[size - 1])
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
