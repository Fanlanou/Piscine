/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <jbagomed@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:05:33 by jbagomed          #+#    #+#             */
/*   Updated: 2023/04/27 15:33:00 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)

{
	int	modulo;
	int	div;

	div = *a / *b;
	modulo = *a % *b;
	*a = div;
	*b = modulo;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}*/
