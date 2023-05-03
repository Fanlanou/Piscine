/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <jbagomed@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:04:24 by jbagomed          #+#    #+#             */
/*   Updated: 2023/04/27 12:44:02 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;	

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("before swap:\na = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(&a, &b);
	printf("after swap:\na = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}*/
