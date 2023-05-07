#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	
	while (size >= 0)
	{
		i = 0
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_int_tab(argv, argc);
	}
}
