int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int	main()
{
	printf("1--->%d\n",ft_is_prime(1));
	printf("0--->%d\n",ft_is_prime(0));
	printf("55-->%d\n",ft_is_prime(55));
        printf("7--->%d\n",ft_is_prime(7));
	printf("11-->%d\n",ft_is_prime(11));
        printf("22-->%d\n",ft_is_prime(22));
}
