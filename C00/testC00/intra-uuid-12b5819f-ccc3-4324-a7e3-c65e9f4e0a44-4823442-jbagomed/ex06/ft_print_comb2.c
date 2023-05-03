/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <jbagomed@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:15:09 by jbagomed          #+#    #+#             */
/*   Updated: 2023/04/25 14:00:02 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prin(char c)
{
	write(1, &c, 1);
}

void	comb(int a, int b, int end)
{
	prin(a / 10 + 48);
	prin(a % 10 + 48);
	prin(' ');
	prin(b / 10 + 48);
	prin(b % 10 + 48);
	if (end)
	{
		prin(',');
		prin(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	end;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			end = !(a == 98 && b == 99);
			comb(a, b, end);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/