/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagomed <jbagomed@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:25:19 by jbagomed          #+#    #+#             */
/*   Updated: 2023/04/27 19:07:16 by jbagomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{	
	int	a;

	a = 0;
	while (str [a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}	
}

/*int	main(void)
{
	char	a[] = {"ich check's nicht\n"};
        //a[] = "ich check's nicht\n";
	ft_putstr(a);
	return (0);
}*/
