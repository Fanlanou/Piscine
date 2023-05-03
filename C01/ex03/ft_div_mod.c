/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <jbagomed@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:47:58 by jbagomed          #+#    #+#             */
/*   Updated: 2023/04/27 13:16:11 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 9;
	b = 2;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
}*/
