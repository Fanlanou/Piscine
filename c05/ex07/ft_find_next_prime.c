int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb > 1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	printf("1--->%d\n",ft_find_next_prime(1));
	printf("0--->%d\n",ft_find_next_prime(112));
	printf("55-->%d\n",ft_find_next_prime(55));
        printf("7--->%d\n",ft_find_next_prime(7));
	printf("11-->%d\n",ft_find_next_prime(11));
        printf("22-->%d\n",ft_find_next_prime(22));
}
