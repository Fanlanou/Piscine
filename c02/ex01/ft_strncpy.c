#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main()
{
	char source[] = "hello world";
	char destin[] = "destination";
	int	n = 5;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

	ft_strncpy(destin, source, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, destin);
	return (0);
}

